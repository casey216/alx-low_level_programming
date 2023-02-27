#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string varible
 */

void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = length / 2 + 1;
	}

	while (i < length)
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
