#include <stdio.h>
/**
 * main- prints the alphabet in lowercase,
 * and then in uppercase,followed by a new line.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int a;
	for (a = 0; a < 52; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}
