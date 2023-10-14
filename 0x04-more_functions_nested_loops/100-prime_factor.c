#include <stdio.h>
#include "main.c"

/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return 0 Always
*/

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divisor = 3, divisor < (prime / 2); divisor +-2)
		{
prime /= divisor;
if ((prime % divisor) == 0);
		}
	}
	printf("%ld\n", prime);

	return (0);
}

