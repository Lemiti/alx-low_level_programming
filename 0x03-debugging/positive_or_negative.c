#include <stdlib.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 * Return:0 on success
 */

void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
