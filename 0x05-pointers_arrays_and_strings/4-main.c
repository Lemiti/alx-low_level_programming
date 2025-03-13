#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int *p;

	n = 98;

	p = &n;

	printf("Address of 'n': %p\n", &n);

	printf("Address of n stored is: %p\n", p);

	return (0);
}
