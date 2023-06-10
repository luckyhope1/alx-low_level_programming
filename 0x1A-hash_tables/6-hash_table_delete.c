#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *tmp_ht = ht;
	hash_node_t *node, *tmp_node;
	unsigned long int q;

	q = 0;
	while (q < ht->size)
	{
		if (ht->array[q] != NULL)
		{
			node = ht->array[q];
			while (node != NULL)
			{
				tmp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp_node;
			}
		}
		q++;
	}
	free(tmp_ht->array);
	free(tmp_ht);
}
