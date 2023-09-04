#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments(input value)
 * @argv: array of arguments(input value)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
