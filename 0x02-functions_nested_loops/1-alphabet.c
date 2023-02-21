#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints "_putchar"
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
