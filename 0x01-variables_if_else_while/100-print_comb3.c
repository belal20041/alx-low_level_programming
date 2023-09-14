#include <stdio.h>

/**
 * main -entry point
 * Description possible different combinations of two digits.
 * Return: always 0 (succees)
 */

int main(void)
{
	int one = 0, two;

	while (one <= 8)
	{
		two = one + 1;

		while (two <= 9)
		{

			if (one != two)
			{
				putchar(one + '0');
				putchar(two + '0');
				putchar(',');
				putchar(' ');
			}

			two++;
		}

		one++;
	}

	return (0);
}
