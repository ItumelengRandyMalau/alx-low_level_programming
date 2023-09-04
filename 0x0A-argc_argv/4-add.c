#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array(input value)
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{

	unsigned int length;

	length = 0;
	while (length < strlen(str))

	{
		if (!isdigit(str[length]))
		{
			return (0);
		}

		length++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: input va;ue
 * @argv: input value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int length;
	int str_int;
	int sum = 0;

	length = 1;
	while (length < argc)
	{
		if (check_num(argv[length]))

		{
			str_int = atoi(argv[length]);
			sum += str_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		length++;
	}

	printf("%d\n", sum);

	return (0);
}
