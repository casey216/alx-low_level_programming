#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string varible
 */

void print_rev(char *s)
{
	char *tmp = s;
	int length = 0;
	int i = 0;

	while (*(tmp++) != '\0')
	{
		length++;
	}

	while (i++ < length)
	{
		_putchar(*(s + i));
	}
	
	_putchar('\n');
}
