#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string variable
 *
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	char *s;

	s = str;

	while (*str++ != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
	}

	return (s);
}
