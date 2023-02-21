#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * times_table - prints every minute of the day
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int product;

			product = i * j;

			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
                        	_putchar(',');
		       		_putchar(' ');
			}
			else
			{
				_putchar(product + '0');
               		        _putchar(',');
                       		_putchar(' ');
				_putchar(' ');
			}

			if (j == 9)
			{
				_putchar('\n');
				break;
			}
		}
	}
}
