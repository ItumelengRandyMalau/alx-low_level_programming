#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main_ the program that  print the last digit of a random number
*generated and determines whether it is greater than 5, less than 6, or 0.
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %dand is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("%d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("las digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);
}