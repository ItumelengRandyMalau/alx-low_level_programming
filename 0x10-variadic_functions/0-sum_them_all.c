#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function(input).
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list calc;
	unsigned int i, sum = 0;

	va_start(calc, n);

	for (i = 0; i < n; i++)
		sum += va_arg(calc, int);

	va_end(calc);

	return (sum);
}
