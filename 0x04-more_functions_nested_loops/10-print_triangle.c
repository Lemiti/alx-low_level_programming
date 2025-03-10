#include "main.h"

/**
 * print_triangle - discplay triangle
 * @size: determines size of triangle
 */
void print_triangle(int size)
{
	int i, j, a;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 0; j--)
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
