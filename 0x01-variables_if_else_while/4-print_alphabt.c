#include <stdio.h>

/**
 * main -entry point
 * Description prints the alphabet in lowercase, followed by a new line
 * Return: always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	putchar(\n);
	return (0);
}
