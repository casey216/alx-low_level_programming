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
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -1 * last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
