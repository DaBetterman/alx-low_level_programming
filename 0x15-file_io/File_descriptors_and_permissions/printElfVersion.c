/**
 * printElfVersion - Prints the ELF version.
 * @magicNumbers: A pointer to an array containing the ELF version.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void printElfVersion(unsigned char *magicNumbers)
{
	printf("  Version:                           %d", magicNumbers[EI_VERSION]);

	switch (magicNumbers[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
