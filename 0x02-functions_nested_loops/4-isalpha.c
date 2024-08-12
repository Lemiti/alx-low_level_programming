#include <stdio.h>
/**
 * _isalpha - Checks if the
 *@c: this is intiger value
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
