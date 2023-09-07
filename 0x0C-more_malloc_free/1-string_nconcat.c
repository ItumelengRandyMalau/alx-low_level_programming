#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to to append to(source)
 * @s2: string to concatenate from(destination)
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, v = 0, lien1 = 0, lien2 = 0;

	while (s1 && s1[lien1])
		lien1++;
	while (s2 && s2[lien2])
		lien2++;

	if (n < lien2)
		p = malloc(sizeof(char) * (lien1 + n + 1));
	else
		p = malloc(sizeof(char) * (lien1 + lien2 + 1));

	if (!p)
		return (NULL);

	while (i < lien1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lien2 && i < (lien1 + n))
		p[i++] = s2[v++];

	while (n >= lien2 && i < (lien1 + lien2))
		p[i++] = s2[v++];

	p[i] = '\0';

	return (p);
}
