#include "main.h"

/**
 * print_triangle - discplay triangle
 * @size: determines size of triangle
 */
void print_triangle(int size)
{
	int i, j, a;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (a = 0; a < i; a++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
