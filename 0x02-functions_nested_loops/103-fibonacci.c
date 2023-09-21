#include <stdio.h>

/**
 * main -entry point
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int x = 0, y = 1, sum;
	float total;

	while (1)
	{
		sum = x + y;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		x = y;
		y = sum;

	}
	printf("%.0f\n", total);
	return (0);
}
