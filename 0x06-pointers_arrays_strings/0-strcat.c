#include "main.h"

/**
 * _strcat -concatenates two strings.
 * @dest:
 * @src:
 * Return: string
 * */

char *_strcat(char *dest, char *src)
{
  int ch, _ch;

  while (dest[ch])
    ch++;

  while (src[_ch])
  {
    int _ch = 0;

    dest[ch++] = src[_ch];
    _ch++;
  }

}
