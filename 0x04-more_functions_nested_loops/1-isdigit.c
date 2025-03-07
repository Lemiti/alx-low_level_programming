#include "main.h"

/**
 * _isdigit - checks wether the inputed is a number or not
 * @c: integer variable
 * Return:1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
