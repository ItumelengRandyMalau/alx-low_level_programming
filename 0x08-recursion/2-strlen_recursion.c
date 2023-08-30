#include "main.h"
/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: input
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (longit);
}
