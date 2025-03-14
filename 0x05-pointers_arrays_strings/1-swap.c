#include "main.h"

/**
 * swap_int - swaps the two integer values
 * @a: first address
 * @b: the second address
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
