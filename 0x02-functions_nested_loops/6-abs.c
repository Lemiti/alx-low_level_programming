#include "main.h"

/**
 * _abs - absolute value calculator
 * @n: integer to be checked
 *
 * Return: positive value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int i = -1 * n;

		return (i);
	}
	return (n);
}
