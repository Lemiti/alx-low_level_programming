#include "main.h"

/**
 * print_alphabet - Prints alphabets from a-z
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
