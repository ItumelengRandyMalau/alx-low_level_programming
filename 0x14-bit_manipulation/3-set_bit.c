#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: points to the number to be changed
 * @index:  index, starting from 0 of the bit you want to set
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
