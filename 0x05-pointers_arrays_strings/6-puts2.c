#include "main.h"

/**
 * puts2 - t prints string, starting with the first character
 * @str: sting
 */

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; ++num)
       	{
		if ((num / 2) == 0)
			_putchar(str[num]);
       	}
       	_putchar('\n');
}
