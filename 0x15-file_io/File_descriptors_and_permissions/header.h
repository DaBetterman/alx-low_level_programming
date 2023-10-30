#ifndef HEADER_H
#define HEADER_H

#include "header.h"

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

#endif /* HEADER_H */
