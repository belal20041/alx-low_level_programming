#include "main.h"
#include "stdlib"
#include "time.h"

/**
 * main - a program that generates random valid password
 * Return: 0
 * */

int main(void)
{
	int sum;
	char ch;

	srand(time(NULL));
	while (sum <= 2645)
	{
		C = rand() % 120;
		sum += ch;
		putchar(ch);
	}
	putchar(2772- sum);
	return (0);
}
