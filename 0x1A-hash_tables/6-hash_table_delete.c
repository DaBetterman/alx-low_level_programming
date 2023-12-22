#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *new_node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];

		while (new_node != NULL)
		{
			temp = new_node;
			new_node = new_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
