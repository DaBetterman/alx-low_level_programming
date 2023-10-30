#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkElf(unsigned char *magicNumbers);

void printMagicNumbers(unsigned char *magicNumbers);

void printElfClass(unsigned char *magicNumbers);

void printElfData(unsigned char *magicNumbers);

void printElfVersion(unsigned char *magicNumbers);

void printElfAbi(unsigned char *magicNumbers);

void printElfOsAbi(unsigned char *magicNumbers);

void printElfType(unsigned int eType, unsigned char *magicNumbers);

void printElfEntryPoint(unsigned long int entryPoint, unsigned char *magicNumbers);

void closeElfFile(int fileDescriptor);

/**
* printMagicNumbers - Prints the magic numbers of the ELF header.
* @magicNumbers: A pointer to an array containing the ELF magic numbers.
*/

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

/**
* printElfVersion - Prints the ELF version.
* @magicNumbers: A pointer to an array containing the ELF version.
*/

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

/**
* printElfType - Prints the type of the ELF file
*                  (e.g., executable, shared object).
* @eType: The ELF type.
* @magicNumbers: A pointer to an array containing the data encoding.
*/

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

/**
* printElfOsAbi - Prints the OS/ABI (Operating System/ABI) of the ELF file.
* @magicNumbers: A pointer to an array containing the OS/ABI.
*/

void printElfOsAbi(unsigned char *magicNumbers)
{
	printf("  OS/ABI:                            ");

	switch (magicNumbers[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", magicNumbers[EI_OSABI]);
	}
}

/**
* printElfEntryPoint - Prints the entry point address of the ELF file.
* @entryPoint: The address of the ELF entry point.
* @magicNumbers: A pointer to an array containing the ELF class.
*/

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

/**
* printElfData - Prints the data encoding (endianess) of the ELF file.
* @magicNumbers: A pointer to an array containing the data encoding.
*/

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

/**
* printElfClass - Prints the ELF class (32-bit or 64-bit).
* @magicNumbers: A pointer to an array containing the ELF class.
*/


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

/**
* printElfAbi - Prints the ABI version of the ELF file.
* @magicNumbers: A pointer to an array containing the ABI version.
*/



void printElfAbi(unsigned char *magicNumbers)
{
	printf("  ABI Version:\t\t\t\t\t   %d\n", magicNumbers[EI_ABIVERSION]);
}

/**
* closeElfFile - Closes the ELF file.
* @elf: The file descriptor of the ELF file.
* Exits with an error message if the file cannot be closed.
*/

void closeElfFile(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", elf);
		exit(98);
	}
}

/**
* checkElf - Checks if the file is a valid ELF file.
* @magicNumbers: A pointer to an array containing the ELF magic numbers.
* Exits with an error message if the file is not an ELF file.
*/


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


/**
* main - The function that reads and processes the ELF header.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: 0 on success.
*/

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
