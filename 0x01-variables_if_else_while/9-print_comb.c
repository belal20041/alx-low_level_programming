#include <stdio.h>

/**
 * main -entry point
 * Description prints all possible combinations of single-digit numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
	if (num != 9)
	}
		putchar(',');
		putchar(' ');
	}
		num++;
	}
	putchar('\n');
	return (0);
}
