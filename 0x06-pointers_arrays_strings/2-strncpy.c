#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}

	return (dest);
}
