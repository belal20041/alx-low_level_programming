#include <stdio.h>

/**
 * main -entry point
 * Return: 0 (success)
 */

int main(void)
{
	long unsigned int x = 0, y = 1, sum, count;

	for (count = 0; count <= 49; count++)
	{
		sum = x + y;
		printf("%lu", sum);

		x = y;
		y = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
