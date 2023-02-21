#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int n;

	for (n = 0; n < 1440; n++)
	{
		int hour = n / 60;
		int minute = n % 60;
	
		_putchar(hour + '0');
		_putchar(':');
		_putchar(minute + '0');
		_putchar('\n');
	}
}
