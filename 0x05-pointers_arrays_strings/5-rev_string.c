#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string variable
 * @s: string varible
 */

void rev_string(char *s)
{
	char temp;
	int length, i, j;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	j = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}

}
