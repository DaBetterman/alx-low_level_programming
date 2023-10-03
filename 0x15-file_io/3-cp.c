/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"


#define BUFFER_SIZE 1024

void exit_with_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}


int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
int newFile_from = open(file_from, O_RDONLY);
int newFile_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
exit_with_error(97, "Usage: cp file_from file_to");
}

if (newFile_from == -1)
{
exit_with_error(98, "Error: Can't read from file");
}

if (newFile_to == -1)
{
exit_with_error(99, "Error: Can't write to file");
}

while ((bytes_read = read(newFile_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(newFile_to, buffer, bytes_read);
if (bytes_written == -1)
{
exit_with_error(99, "Error: Can't write to file");
}
}

if (bytes_read == -1)
{
exit_with_error(98, "Error: Can't read from file");
}

if (close(newFile_from) == -1 || close(newFile_to) == -1)
{
exit_with_error(100, "Error: Can't close fd %d\n");
}

return (0);
}
