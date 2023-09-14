#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line(input).
 * @separator: The string to be printed between numbers(input).
 * @n: The number of integers passed to the function(input).
 * @...: A variable number of numbers to be printed(input)..
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbrs;
	unsigned int i;

	va_start(numbrs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbrs, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbrs);
}
