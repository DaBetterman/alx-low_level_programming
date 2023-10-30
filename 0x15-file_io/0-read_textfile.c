/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *text = fopen(filename, "r");
	char buffer;
	ssize_t count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	if (text == NULL)
	{
		return (0);
	}

	while (count < (ssize_t)letters && fread(&buffer, 1, 1, text) == 1)
	{
		if (write(STDOUT_FILENO, &buffer, 1) != 1)
		{
			fclose(text);
			return (0);
		}

		count++;
	}

	fclose(text);
	return (count);
}
