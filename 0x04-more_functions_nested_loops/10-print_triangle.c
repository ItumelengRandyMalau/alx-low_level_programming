#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, j;

		for (x = 1; x <= size; x++)
		{
			for (j = x; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= x; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
