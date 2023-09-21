#include "main.h"

/**
 * times_table -prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n, m, res;
	_putchar(48);
	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			res = n * m;

			if (res <= 9)
			{
				_putchar(' ');
				_putchar(res + 48);
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
