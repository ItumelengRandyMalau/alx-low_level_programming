#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments(input value)
 * @argv: array of arguments(input value)
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int numb, p, results;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	results = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p < 5 && numb >= 0; p++)
	{
		while (numb >= coins[p])
		{
			results++;
			numb -= coins[p];
		}
	}

	printf("%d\n", results);
	return (0);
}
