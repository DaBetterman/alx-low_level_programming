/**
 * main - The function that reads and processes the ELF header.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main(int __attribute__((__unused__)) argc, char *argv[])
{
	unsigned char magicNumbers[EI_NIDENT];
	int fileDescriptor, readResult;

	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	readResult = read(fileDescriptor, magicNumbers, EI_NIDENT);
	if (readResult == -1)
	{
		closeElfFile(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkElf(magicNumbers);
	printf("ELF Header:\n");
	printMagicNumbers(magicNumbers);
	printElfClass(magicNumbers);
	printElfData(magicNumbers);
	printElfVersion(magicNumbers);
	printElfOsAbi(magicNumbers);
	printElfAbi(magicNumbers);
	printElfType(((Elf64_Ehdr *)magicNumbers)->e_type, magicNumbers);
	printElfEntryPoint(((Elf64_Ehdr *)magicNumbers)->e_entry, magicNumbers);

	closeElfFile(fileDescriptor);
	return (0);
}
