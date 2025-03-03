#include "main.h"

/**
 * print_last_digit - writes last digit
 * @n: inputed number
 * Return: last number digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{

		n = -1 * n;
	}

	ld = n % 10;

	_putchar('0' + ld);
	return (n % 10);
}
