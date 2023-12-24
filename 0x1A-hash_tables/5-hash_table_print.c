#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table(ht).
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *bug;
	int fun = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bug = ht->array[i];
		while (bug)
		{
			if (fun)
				printf(", ");
			printf("'%s': '%s'", bug->key, bug->value);
			fun = 1;
			bug = bug->next;
		}
	}
	printf("}\n");
}
