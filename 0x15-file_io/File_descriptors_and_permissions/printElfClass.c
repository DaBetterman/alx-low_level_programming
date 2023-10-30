/**
 * printElfClass - Prints the ELF class (32-bit or 64-bit).
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


void printElfClass(unsigned char *magicNumbers)
{
	printf("  Class:                             ");

	switch (magicNumbers[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", magicNumbers[EI_CLASS]);
	}
}
