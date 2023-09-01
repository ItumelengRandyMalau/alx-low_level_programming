#include "main.h"
/**
 * _puts - prints a string
 * @str: input value
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
