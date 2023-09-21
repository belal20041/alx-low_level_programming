#include "main.h"

/**
 * print_to_98 -rints all natural numbers from n to 98
 * @n: given numbers
 */
void print_to_98(int n)
{
	int res;

	if (n > 98)
	{
		for (res = n; res > 98; res--)
			printf("%d", res);
	}
	else
	{
		for (res = n; res < 98; res++)
			printf("%d", res);
	}
}
