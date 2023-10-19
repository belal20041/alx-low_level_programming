#include "main.h"

 /**
  * _sqrt_recursion -function returns the natural square root
  * @n:num
  * Return:square
  */
int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square -  natural square root of a number
 * @n: num
 * @value: val
 * Return: int
 */

int square(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (square(n, value + 1));
	else
		return (-1);
}
