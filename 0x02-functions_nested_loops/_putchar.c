#include "main.h"
#include <unistd.h>
/**
 * _Putchar - write the  character c to stdout.
 * *@c: input.
 *
 * Return: 1(Success).
 * on error: -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
