#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 On success
 */
int main(void)
{
	int x;

	int y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
