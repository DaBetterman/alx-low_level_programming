#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *allocateBuffer(char *file);
void closeFileDescriptor(int fd);

/**
* allocateBuffer - Allocates 1024 bytes of memory for a buffer.
* @file: The name of the file where characters are stored.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *allocateBuffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to allocate memory for %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* closeFileDescriptor - Closes a file descriptor.
* @fd: The file descriptor to be closed.
*/
void closeFileDescriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies the contents of one file to another.
* @argc: The number of arguments provided to the program.
* @argv: An array of pointers to the program's arguments.
*
* Return: 0 on successful execution.
*
* Description: If the argument count is incorrect - exit code 97.
*				If the source file doesn't exist or can't be read - exit code 98.
*				If the destination file can't be created or written to - exit code 99.
*              If there are issues closing file descriptors - exit code 100.
*/
int main(int argc, char *argv[])
{
	int source, destination, readBytes, writtenBytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}

	buffer = allocateBuffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	readBytes = read(source, buffer, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || readBytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writtenBytes = write(destination, buffer, readBytes);
		if (destination == -1 || writtenBytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		readBytes = read(source, buffer, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (readBytes > 0);

	free(buffer);
	closeFileDescriptor(source);
	closeFileDescriptor(destination);

	return (0);
}
