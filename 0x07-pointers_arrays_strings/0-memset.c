#include "main.h"

/**
 * _memsset:  fills memory with a constant byte
 * @b: ef
 * @s: 	f
 * @n:c
 */


char *_memset(char* s, char b, unsigned int n) 
{
	for (unsigned int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
 	return s;
}


