#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_to_98 - checks if char is lowercase
 * @n: The char to be checked
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			if (n > 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n + '0');
			}

			_putchar(',');
		}
	}
	else
	{
		for (n; n <= 98; n++)
		{

                                _putchar(n / 10 + '0');
                                _putchar(n % 10 + '0');
                        }
                        else
                        {
                                _putchar(n + '0');
                        }

                        _putchar(',');
                }
	}	
}

