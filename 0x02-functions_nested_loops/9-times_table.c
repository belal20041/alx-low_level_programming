#include "main.h"

/**
 * times_table -prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n, m, res;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			res = n * m;

			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (res <= 9 && m !=0)
				_putchar(' ');
			else
			{
				_putchar((res / 10) + 48);
			}
			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}
