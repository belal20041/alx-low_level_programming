#include <stdio.h>

/**
 * 
 * _putchar -prints a string, followed by a new line.
 * @c: char
 * Return: n
 */

int _putchar(char c)
{
  return (write(1, &c, 1));

}
