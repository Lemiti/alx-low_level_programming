#include <stdio.h>

/**
 * main - dereferencing pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("value of 'n': %d\n", n);
	printf("Address of 'n': %p\n",&n);
	printf("Value of 'p': %p\n", p);
	*p = 402;
	printf("\nValue of 'n': %d\n",n);
	return (0);
}
