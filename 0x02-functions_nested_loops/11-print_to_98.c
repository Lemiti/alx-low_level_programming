#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the number from n to 98
 * @a: starting point to be printed
 */
void print_to_98(int a)
{
	if (a < 98)
	{
		while (a <= 98)
		{
			printf("%d", a);

			if (a != 98)
				printf(", ");

			a += 1;
		}
	}
	else
	{
		while (a >= 98)
		{
			printf("%d", a);

			if (a != 98)
				printf(", ");

			a -= 1;
		}
	}
	printf("\n");
}
