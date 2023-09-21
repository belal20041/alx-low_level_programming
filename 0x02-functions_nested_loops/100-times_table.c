#include "main.h"

/**
 * print_times_table -prints the n times table
 * @n: numbers
 */

void print_times_table(int n)
{
	int x, y, res;

	for (x = 0; x < n; x++)
	{
		if (n > 15 && n < 0)
			break;
		_putchar(48);
		for (y = 1; y < n; y++)
		{
			res = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (res > 9)
				_putchar((res % 10) + 48);
			_putchar((res / 10) + 48);
		}
	}

}
