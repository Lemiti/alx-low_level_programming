#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet
 */

void print_alphabet_x10(void)
{
	int i = 0;

	char c;

	for (; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
