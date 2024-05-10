#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array of integers
 * @size: size of array
 * @value: target value to be found
 *
 * Return: index of value searched or -1 if it doesn't exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (value == array[i])
		{
			printf("Found %d at index: %lu\n", value, (unsigned long)i);
			return (i);
		}
	}

	return (-1);
}
