#include "hash_tables.h"

/**
 * key_index - gets index of a key given
 * @key: key(str) to hash
 * @size: size of the array of the hash table
 *
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
