#include <stdio.h>

/**
 * main -Entry point
 * description prints the alphabet in lowercase, followed by a new line
 * Return: Always (0) success
 */

int main(void)
{
        char ch = 'a';
	char CH = 'A';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
        putchar('\n');
        return (0);
}
