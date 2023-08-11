#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}
