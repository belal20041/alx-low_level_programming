#include "main.h"

/**
 * times_table -prints the 9 times table, starting with 0.
 * */

void times_table(void)
{
	int n, m, res;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m =0; m <= 9; m++)
		{
			res = n * m;

			if (res <= 9 && m < 9)
			{
				_putchar(res + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (res > 9 && m < 9)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			

		}
		_putchar('\n');
	}
}
