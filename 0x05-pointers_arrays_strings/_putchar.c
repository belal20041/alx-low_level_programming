#include <stdio.h>

/**
 * _putchar -write a letter
 * @c: ascci num
 * Return: character assci code
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
