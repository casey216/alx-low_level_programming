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

	while (i < length / 2)
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
