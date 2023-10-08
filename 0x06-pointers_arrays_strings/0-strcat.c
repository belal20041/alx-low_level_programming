#include "main.h"

/**
 * _strcat -concatenates two strings.
 * @dest:
 * @src:
 * Return: string
 * */

char *_strcat(char *dest, char *src)
{
  int ch, ch2;

  while (dest[ch])
    ch++;

  for (ch2 = 0; src[ch2]; ch2++)
    dest[ch++] = src[ch2];

}
