/**
 * closeElfFile - Closes the ELF file.
 * @elf: The file descriptor of the ELF file.
 * Exits with an error message if the file cannot be closed.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void closeElfFile(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", elf);
		exit(98);
	}
}
