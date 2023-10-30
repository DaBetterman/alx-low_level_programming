/**
 * printElfEntryPoint - Prints the entry point address of the ELF file.
 * @entryPoint: The address of the ELF entry point.
 * @magicNumbers: A pointer to an array containing the ELF class.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void printElfEntryPoint(unsigned long int entryPoint, unsigned char *magicNumbers)
{
	printf("  Entry point address:               ");

	if (magicNumbers[EI_DATA] == ELFDATA2MSB)
	{
		entryPoint = ((entryPoint << 8) & 0xFF00FF00) |
					((entryPoint >> 8) & 0xFF00FF);
		entryPoint = (entryPoint << 16) | (entryPoint >> 16);
	}

	if (magicNumbers[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)entryPoint);
	}
	else
	{
		printf("%#lx\n", entryPoint);
	}
}
