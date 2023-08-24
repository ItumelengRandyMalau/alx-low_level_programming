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
	int temp;

	for (i = 0; a[i] < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
		
	}
}
