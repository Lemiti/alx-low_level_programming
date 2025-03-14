#include "main.h"

/**
 * puts2 - prints every characters wich are found in odd
 * @str: variable to hold string
 */

void puts2(char *str)
{
	int i, n;

	while (str[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
