#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Adjust spacing for single-digit numbers */
				if (product < 10)
					_putchar(' ');

				if (product >= 10)
					_putchar((product / 10) + '0');

				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

