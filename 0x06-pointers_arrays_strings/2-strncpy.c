#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the addres to be copied on
 * @src: the string to be copied
 * @n: the maximum byte of string src
 * Return: copied string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n >= 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (ptr);

	*dest = '\0';

	return (dest);
}
