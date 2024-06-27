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

	int z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
