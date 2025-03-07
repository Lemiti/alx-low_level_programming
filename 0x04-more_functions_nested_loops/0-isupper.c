#include "main.h"

/**
 * _isupper - checks wether the inputed value is capital or not
 * @c: input variable 
 * Return:1 if c is upper case 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
