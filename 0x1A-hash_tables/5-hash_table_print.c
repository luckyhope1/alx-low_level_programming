#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table to be printed.
 *
 * Return: No return.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;
	unsigned long int q = 0, n = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (q = n; q < ht->size; q++)
	{
		if (ht->array[q] != NULL)
		{
			test = ht->array[q];
			while (test)
			{
				printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					   test->key, test->value), n++;
				test = test->next;
			}
		}
	}
	printf("}\n");
}
