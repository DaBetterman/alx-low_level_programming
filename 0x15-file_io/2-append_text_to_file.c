/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
*
* Return: If the function fails or filename is NULL - -1.
*         If the file does not exist the user lacks write permissions - -1.
*         Otherwise - 1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int newFile = open(filename, O_WRONLY | O_APPEND);

	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}



	if (newFile == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(newFile, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(newFile);
			return (-1);
		}
	}

	close(newFile);
	return (1);
}
