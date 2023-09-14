#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings(input).
 * @n: The number of strings passed to the function(input).
 * @...: A variable number of strings to be printed(input)..
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *arr;
	unsigned int x;

	va_start(str, n);

	for (x = 0; x < n; x++)
	{
		arr = va_arg(str, char *);

		if (arr == NULL)
			printf("(nil)");
		else
			printf("%s", arr);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
