#include "main.h"

/**
 * main - Entry point
 *
 * Return:0 on success
 */

int main(void)
{
	char my_c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int i = 0;

	for (; i < 8; i++)
	{
		_putchar(my_c[i]);
	}

	_putchar('\n');

	return (0);

}
