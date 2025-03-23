#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: byte at most from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return ptr;
}

