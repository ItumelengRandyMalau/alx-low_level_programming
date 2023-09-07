#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled(input)
 * @b: char to copy(input)
 * @n: number of times to copy b(input)
 *
 * Return: pointer to the memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array(input)
 * @size: size of each element(input)
 *
 * Return: pointer to allocated memory(arr)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);

	return (arr);
}
