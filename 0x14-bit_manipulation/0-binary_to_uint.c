#include "main.h"
/**
 *  binary_to_uint - converts a binary number to an unsigned int.
 *  @b: A string containing the binary number(input).
 *
 *  Return:  the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (*b == '\0')
		return (0);

	for (num = 0; *b; b++)
	{

		if (*b == '1')
			num = (num << 1) | (*b - '0');
		else if (*b == '0')
			num = (num << 1) | (*b - '0');

		else

			return (0);
	}
	return (num);
}
