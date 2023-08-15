#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int c, j;

	c = 0;

	while (c < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		c++;
	}
}

