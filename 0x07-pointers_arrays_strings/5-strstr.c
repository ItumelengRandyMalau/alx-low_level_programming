#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *s = needle;

		while (*k == *s && *s != '\0')
		{
			k++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}

	return (0);
}
