#include "main.h"

/**
 * print_diagonal -draws a diagonal line on the terminal.
 * @n: num
 */

void print_diagonal(int n)
{
	int diag, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (space = 1; space <= diag; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
