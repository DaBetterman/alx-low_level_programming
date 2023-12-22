#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *new_node;
	int count = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];

		while (new_node != NULL)
		{
			if (count == 1)
				printf(", ");

			printf("'%s': '%s'", new_node->key, new_node->value);

			count = 1;
			new_node = new_node->next;
		}
	}

	printf("}\n");
}
