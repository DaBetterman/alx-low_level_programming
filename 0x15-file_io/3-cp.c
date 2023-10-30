#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include "main.h"


/**
 * error_file - checks if files can be opened.
 * @location: location.
 * @destination: destination.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int location, int destination, char *argv[])
{
	if (location == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - The main function that will start and end the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int location, destination, fclose;
	ssize_t count, numb;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp location destination");
		exit(97);
	}

	location = open(argv[1], O_RDONLY);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(location, destination, argv);

	count = 1024;
	while (count == 1024)
	{
		count = read(location, buffer, 1024);
		if (count == -1)
			error_file(-1, 0, argv);
		numb = write(destination, buffer, count);
		if (numb == -1)
			error_file(0, -1, argv);
	}

	fclose = close(location);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", location);
		exit(100);
	}

	fclose = close(destination);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
		exit(100);
	}
	return (0);
}
