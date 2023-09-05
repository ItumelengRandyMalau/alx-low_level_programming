#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings and allocate the required space
 * @s1: input value1
 * @s2: input value2
 * Return: concatenated string of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *final;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	final = malloc(sizeof(char) * (i + j + 1));

	if (final == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		final[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		final[i] = s2[j];
		i++, j++;
	}
	final[i] = '\0';
	return (final);
}
