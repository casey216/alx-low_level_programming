#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: The number to be checked
 * Return: 1 if n is postive, -1 is negative and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
