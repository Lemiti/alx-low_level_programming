#include "main.h"

/**
 * times_table - display the number tables
 * Return: nothing
 */

void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			a = i * j;
			while (a > 9)
			{

			}
			_putchar('0' + a);
			_putchar(44);
			_putchar(32);
		}
		a = i * 9;
		_putchar('0' + a);
		_putchar(36);
		_putchar(10);
	}
}
