#include "main.h"

/**
 * _memsset:  fills memory with a constant byte
 * @b:
 * @s:
 * @n:
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int chr;

  for (chr = 0; n > 0; chr++, n--)
    s[chr] = b;
  return (0);
}
