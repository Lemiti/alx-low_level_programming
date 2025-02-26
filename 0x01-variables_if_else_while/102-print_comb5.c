#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:0 on success
 */

int main(void)
{
	int i, j, d, c;
	

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (d = i; d <= 57; d++)
			{
				int yazh = 0;
				do {	
					if (d == i && yazh == 0)
					{
						c = j + 1;
					}else if (yazh == 0) {
						c = 48;
					} 
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(d);
					putchar(c);
					
					if (!(i == 57 && j == 56))
					{
						putchar(44);
						putchar(32);
					}
					++c;
					++yazh;
				} while(c <= 57);
			}
		}
	}
	putchar(10);

	return (0);
}
