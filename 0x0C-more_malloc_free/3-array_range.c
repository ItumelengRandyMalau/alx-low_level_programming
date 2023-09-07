#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored(input)
 * @max: maximum range of values store & number of elements(input)
 *
 * Return: pointer to the new array(arr)
 */
int *array_range(int min, int max)
{
	int *arr;
	int f, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (f = 0; min <= max; f++)
		arr[f] = min++;

	return (arr);
}
