#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	char *s

	while (*s != '\0')
	{
	_putchar(*s);
	*s--;
	}
	putchar('\n');
}
