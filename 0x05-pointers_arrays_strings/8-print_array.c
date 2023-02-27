#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string varible
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length-- > 0)
	{
		_putchar(*(s + length));
	}

	_putchar('\n');
}
