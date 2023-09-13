#include <stdio.h>

/**
 * main -entry point
 * Description possible different combinations of two digits.
 * Return: always 0 (succees)
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 9)
	{
		int num2 = 0;

		while (num2 <= 0)
		{
			if (num1 != num2 && num2 > num1)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
			}
			num2++;
		}
		putchar(",");
		putchar(" ");
		num1++;
	}
}
