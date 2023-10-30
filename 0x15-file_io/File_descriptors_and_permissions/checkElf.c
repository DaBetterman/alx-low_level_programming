/**
 * checkElf - Checks if the file is a valid ELF file.
 * @magicNumbers: A pointer to an array containing the ELF magic numbers.
 * Exits with an error message if the file is not an ELF file.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void checkElf(unsigned char *magicNumbers)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (magicNumbers[index] != 127 &&
			magicNumbers[index] != 'E' &&
			magicNumbers[index] != 'L' &&
			magicNumbers[index] != 'F')
			{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
			}
	}
}
