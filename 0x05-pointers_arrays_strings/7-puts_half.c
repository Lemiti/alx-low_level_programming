#include "main.h"

/**
 * puts_half - prints half of s tring
 * @str: variable to take string input
 */
void puts_half(char *str)
{
	int i, n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (n = i / 2; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (i - 1) / 2 + 1; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
