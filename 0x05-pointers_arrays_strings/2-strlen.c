#include "main.h"

/**
 * _strlen - prints the string length
 * @s: variable that holds string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
