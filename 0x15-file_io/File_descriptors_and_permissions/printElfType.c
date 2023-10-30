/**
 * printElfType - Prints the type of the ELF file
 *                  (e.g., executable, shared object).
 * @eType: The ELF type.
 * @magicNumbers: A pointer to an array containing the data encoding.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void printElfType(unsigned int eType, unsigned char *magicNumbers)
{
	if (magicNumbers[EI_DATA] == ELFDATA2MSB)
	{
		eType >>= 8;
	}

	printf("  Type:                              ");

	switch (eType)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", eType);
	}
}
