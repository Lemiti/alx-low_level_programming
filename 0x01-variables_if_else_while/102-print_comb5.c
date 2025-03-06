#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:0 on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(32);
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (!( i == 99 && j == 98))
			{
				putchar(',');
				putchar(' ');
			}
			else if (i == 99 && j ==98)
			{
				break;
			}
		}
	}
	putchar(10);

	return (0);
}
