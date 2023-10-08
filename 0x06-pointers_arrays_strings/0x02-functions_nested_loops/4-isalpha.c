#include "main.h"

/**
 * _isalpha -prints the sign of a number.
 * @c: number to check
 * Return: 1 1 if c is a letter, lowercase or uppercase
 *         0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
