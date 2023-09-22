#include "main.h"

/**
 * print_most_numbers - from 0 to 9Do not print 2 and 4
 */

void print_most_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		if (n == 2 || n == 4)
			continue;
		n++;
	} while (n >=0 && n <= 9);
	_putchar('\n');
}
