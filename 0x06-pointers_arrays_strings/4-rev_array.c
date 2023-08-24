#include "main.h"

/**
 * void reverse_array - a function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}	
