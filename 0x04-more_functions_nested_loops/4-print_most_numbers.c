#include "main.h"

/**
 * print_most_numbers - from 0 to 9Do not print 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
		if (n == 2 || n == 4)
			continue;
	}
	_putchar('\n');
}
