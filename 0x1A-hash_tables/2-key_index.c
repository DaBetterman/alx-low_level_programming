#include "hash_tables.h"

/**
* key_index - Retrieves the index of a key in the hash table array.
* @key: The key for which to find the index.
* @size: The size of the hash table array.
*
* Return: The index at which the key/value pair should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value; /* Variable to store the hash value */

	/* Use the hash_djb2 function to calculate the hash value for the key */
	hash_value = hash_djb2(key);

	/* Calculate the index where the key should be stored*/
    /* based on the hash value and the size of the array */
	return (hash_value % size);
}
