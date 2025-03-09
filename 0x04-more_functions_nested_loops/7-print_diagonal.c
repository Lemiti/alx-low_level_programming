#include "main.h"

/**
 * print_diagonal - prints 
 * @n: diagonal line
 */
void print_diagonal(int n)
{
	int y, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < n; y++)
	{
		for (i = 0; i < y; i++)
		{
			
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
