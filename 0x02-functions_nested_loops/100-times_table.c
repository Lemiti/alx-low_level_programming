#include "main.h"

/**
 * print_times_table - prints the multiplication table based on input
 * @n: the expected table number + 1
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;

				if (b == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					if ((c > 9) && (c < 100))
					{
						_putchar(' ');
						_putchar((c / 10) + '0');
						_putchar((c % 10) + '0');
						if (b != n)
						{
							_putchar(',');
							_putchar(' ');
						}
					}
					if (c >= 100)
					{
						_putchar((c / 100) + '0');

						c = c - (c / 100) * 100;
						_putchar((c / 10) + '0');
						_putchar((c % 10) + '0');
						if (b != n)
						{
							_putchar(',');
							_putchar(' ');
						}
						else
						{
							_putchar('\n');
						}
					}
					if (c <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + c);
						_putchar(' ');
					}

				}
			}
		}
	}
}
