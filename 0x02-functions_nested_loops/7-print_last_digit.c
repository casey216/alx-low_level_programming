#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - return the last digit of number
 * @n: The number to return the digit
 * Return: last digit of of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
