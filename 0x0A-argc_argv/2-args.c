#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments(input value)
 * @argv: array of arguments(input value)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
