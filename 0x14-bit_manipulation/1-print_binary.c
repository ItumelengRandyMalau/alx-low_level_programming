#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary number to print
 */
void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int num;

	for (j = 63; j >= 0; j--)
	{
		currenter = n >> j;

		if (num & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
