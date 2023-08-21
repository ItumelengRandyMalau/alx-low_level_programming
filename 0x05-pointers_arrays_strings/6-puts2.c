#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int var = 0;
	int x = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		var++;
	}
	x = var - 1;
	for (k = 0 ; k <= x ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
