#include "main.h"
/**
 * _puts - prints string followed by new line
 * @str: string variable
 */

void _puts(char *str)
{
	while (*(str) != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
