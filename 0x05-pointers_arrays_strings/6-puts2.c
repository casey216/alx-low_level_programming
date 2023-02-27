#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other char of string
 * @str: string varible
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		if (i % 2 == 0)
			_putchar(*(str + length));
		i++;
	}

	_putchar('\n');
}
