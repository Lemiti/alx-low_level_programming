#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 * Return:void or nothing
 */

void jack_bauer(void)
{
	int h, h2, min, min2;
	
	for (h = 0; h <= 2; h++)
	{
		do {
			if (h == 2 && h2 >3)
			{
				break;
			}
			for (min = 0; min < 6; min++)
                        {
                                for (min2 = 0; min2 <= 9; min2++)
                                {
                                        _putchar('0' + h);
                                        _putchar('0' + h2);
                                        _putchar(58);
                                        _putchar('0' + min);
                                        _putchar('0' + min2);
                                        _putchar(10);
                                }
                        }
			h2 += 1;
		}while(h2<=9);

		h2 = 0;
	}
}
