#include "main.h"

/**
 * main -prints the numbers from 1 to 100, followed by a new line
 *       But for multiples of three print Fizz
 *       for the multiples of five print Buzz
 *       For the multiples of both 3 & 5 print FizzBuzz
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && !(n % 5 == 0))
			printf("Fizz");
		else if ((n % 5 == 0) && !(n % 3 == 0))
			printf("Buzz");
		else if ((n % 5 == 0) && (n % 3 == 0))
			printf("FizzBuzz");
		else
			 printf("%d", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
