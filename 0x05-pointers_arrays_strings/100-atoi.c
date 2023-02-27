#include <stdbool.h>
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: converted interger, 0 if no integer is found
 */

int _atoi(char *s)
{
	int length, i, minus, number, temp;
	bool found;

	length =0;
	i = 0;
	minus =0;
	number = 0;
	found = false;

	while (s[length] != '\0')
		length++;
	
	printf("%d\n", length);

	while (i < length && !found)
	{
		if (s[i] == '-')
			minus++;
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			temp = s[i];
			printf("%d\n", s[i]);
			number = number * 10 + temp;

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

	if (minus % 2 == 0)
	{
		return (number);
	}
	else
	{
		return (-1 * number);
	}
}
