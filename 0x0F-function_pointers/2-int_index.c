#include "function_pointers.h"
/**
 * int_index - returns index place if comparison is true, else -1
 * @array: array(input)
 * @size: size of elements in array(input)
 * @cmp: pointer to function(input)
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
