#include "main.h"

/**
 * print_diagonal -draws a diagonal line on the terminal.
 * @n: num
 */

void print_diagonal(int n)
{
	int diag;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
