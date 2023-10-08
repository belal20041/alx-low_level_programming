#include "main.h"

/**
 * more_numbers -prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int n, m, k;

	for (m = 1; m <= 10; m++)
	{
		for (k = 0; k <= 14; k++)
		{
			n = k;

			if (k > 9)
			{
				_putchar(1 + 48);
				n = k % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
