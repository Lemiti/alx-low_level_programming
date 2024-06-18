#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar(10);
	return (0);
}
