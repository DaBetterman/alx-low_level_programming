/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int newFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t bytes_written = (ssize_t)NULL;

	if (filename == NULL)
	{
		return (-1);
	}

	if (newFile == -1)
	{
		perror("Error creating/opening file");
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(newFile, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			perror("Error writing to file");
			close(newFile);
			return (-1);
		}
	}

	close(newFile);
	return (1);
}





