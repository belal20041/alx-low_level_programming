#include "main.h"

/**
 * is_prime_number -returns 1 if input is a prime, otherwise 0
 * @n: input
 * @othnum: vbhj
 * Return: returns 1 if input is a prime
 *       otherwise 0
 */
int check_prime(int n, int othnum);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime -func
 * @othnum: num
 * @n: hkb
 * Return: int
 */
int check_prime(int n, int othnum)
{
	if (othnum >= n && n > 1)
		return (1);
	else if (n % othnum == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othnum + 1));
}
