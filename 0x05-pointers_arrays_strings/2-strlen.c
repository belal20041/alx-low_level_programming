#include "main.h"

/**
 * strlen - eturns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '/0'; s++)
		++counter;

	return (counter);
}
