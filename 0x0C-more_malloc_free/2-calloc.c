#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array(input)
 * @size: size of each element(input)
 *
 * Return: pointer to allocated memory(ptr)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	void* ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled(input)
 * @b: char to copy(input)
 * @n: number of times to copy b(input)
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}
