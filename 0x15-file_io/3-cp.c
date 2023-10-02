/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"


#define BUFFER_SIZE 1024



int main(int argc, char *argv[])
{
    const char *file_from = argv[1];
    const char *file_to = argv[2];
    ssize_t bytes_read, bytes_written;
    char buffer[1024];
    int newFile_to, newFile_from = 0;
    
    if (argc != 3)
    {
        exit_with_error(97, "Usage: cp file_from file_to");
    }



    newFile_from = open(file_from, O_RDONLY);
    if (newFile_from == -1)
    {
        exit_with_error(98, "Error: Can't read from file");
    }

    newFile_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
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

    if (close(newFile_from) == -1  || close(newFile_to) == -1)
    {
        exit_with_error(100, "Error: Can't close fd %d\n");
    }

    
    return (0);
}
