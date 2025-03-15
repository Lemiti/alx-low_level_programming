#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every characters wich are found in odd
 * @str: variable to hold string
 */

void puts2(char *str)
{
	int i;

	 if (str == NULL)
        return;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
