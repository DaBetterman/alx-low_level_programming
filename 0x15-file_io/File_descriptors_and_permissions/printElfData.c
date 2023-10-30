/**
 * printElfData - Prints the data encoding (endianess) of the ELF file.
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


void printElfData(unsigned char *magicNumbers)
{
	printf("  Data:                              ");

	switch (magicNumbers[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", magicNumbers[EI_DATA]);
	}
}
