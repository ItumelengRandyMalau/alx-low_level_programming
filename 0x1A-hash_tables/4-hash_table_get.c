#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value from
 *
 * Return: value or NULL if key doesn't exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bug;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bug = ht->array[index];

	while (bug)
	{
		if (!strcmp(key, bug->key))
			return (bug->value);
		bug = bug->next;
	}
	return (NULL);
}
