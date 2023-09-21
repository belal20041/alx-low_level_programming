#include "main.h"

/**
 * print_times_table -prints the n times table
 * @n: numbers
 */

void print_times_table(int n)
{
	int x, y, res;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				res = x * y;

				_putchar(',');
				_putchar(' ');

				if (res <= 9)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + 48);
					_putchar((res / 10) % 10 + 48);
				} else if (res <= 99 && res >= 10)
					_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			 _putchar('\n');
		}
	}

}
