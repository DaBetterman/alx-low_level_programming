/**
 * printElfAbi - Prints the ABI version of the ELF file.
 * @magicNumbers: A pointer to an array containing the ABI version.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


void printElfAbi(unsigned char *magicNumbers)
{
	printf("  ABI Version:\t\t\t\t\t   %d\n", magicNumbers[EI_ABIVERSION]);
}
