#include <stdio.h>

/**
 * main -Entry point
 * Description prints all the numbers of base 16 in lowercase
 * Return: always 0 (success)
 */

int main(void)
{
	int hex = 48;

	while (hex <= 102)
	{
		putchar(hex);
		if (hex == 57)
		{
			hex += 39;
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
