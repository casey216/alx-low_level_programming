#include <stdbool.h>
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: converted interger, 0 if no integer is found
 */

int _atoi(char *s)
{
	int length, i, sign;
	unsigned int number;
	bool found;

	length = 0;
	i = 0;
	sign = 1;
	number = 0;
	found = false;

	while (s[length] != '\0')
		length++;

	while (i < length && !found)
	{
		if (s[i] == '-')
			sign *= -1;
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (number * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				found = true;
				break;
			}
		}
		i++;
	}

	if (!found)
		return (0);
	return (sign * number);
}
