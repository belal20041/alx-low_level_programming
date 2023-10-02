#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: num 1
 * @b: num 2
 */

void swap_int(int *a, int *b)i
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
