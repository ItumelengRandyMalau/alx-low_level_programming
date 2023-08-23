#include "main.h"

/**
 * _strcat- a function that concatenates two strings.
 * @dest: input
 * @src: input
 *
 *Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return(dest);
}
