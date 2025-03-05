#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 on Succuss
 */

int main(void)
{
	int x;

	int y;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 90; y++)
	{
		putchar(y);
	}
	putchar(10);
	return (0);
}
