/**
 * printMagicNumbers - Prints the magic numbers of the ELF header.
 * @magicNumbers: A pointer to an array containing the ELF magic numbers.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void printMagicNumbers(unsigned char *magicNumbers)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", magicNumbers[index]);

		if (index == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
