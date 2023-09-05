#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char (input value)
 * Return: 0
 */
char *_strdup(char *str)
{
	char *array;
	int i, p = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		array[p] = str[p];

	return (array);
}
