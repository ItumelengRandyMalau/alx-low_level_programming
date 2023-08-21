#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string to reverse
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int j;

	while (s[count] != '\0')
	count++;
	for (j = 0; j < count; j++)
	{
		count--;
		rev = s[j];
		s[i] = s[count];
		s[count] = rev;
	}
}
