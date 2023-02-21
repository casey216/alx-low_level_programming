#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints "_putchar"
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}

}
