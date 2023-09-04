#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted(input vaule)
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, d, n, len, j, digit;

	k = 0;
	d = 0;
	n = 0;
	len = 0;
	j = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && j == 0)
	{
		if (s[k] == '-')
			++d;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			j = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			j = 0;
		}
		k++;
	}

	if (j == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);

	return (0);
}

