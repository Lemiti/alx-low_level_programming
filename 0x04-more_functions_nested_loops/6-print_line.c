#include "main.h"

/**
 * print_line - draws line
 * @n: number of line to be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
