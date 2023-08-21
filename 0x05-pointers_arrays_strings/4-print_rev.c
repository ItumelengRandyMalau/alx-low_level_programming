#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int strng = 0;
	int i;

	while (*s != '\0')
	{
		strng++;
		s++;
	}
	s--;
	for (i = strng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
