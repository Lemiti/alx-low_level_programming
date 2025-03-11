#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	unsigned long num;

	unsigned long i, prime, maxprime;

	num = 612852475143UL;

	maxprime = 1UL;

	for (i = 2; i < (num / 2) + 1; i++)
	{
		if (num % i == 0)
		{
			for (prime = 1; prime <= i / 2 + 1; prime ++)
			{
				if (i % prime != 0 && prime == i / 2 + 1)
				{
					maxprime = i;
				}
				if (i % prime == 0 && prime != 1)
				{
					break;
				}
			}
		}

	}
	
	printf("%lu\n", maxprime);

	return (0);
}
