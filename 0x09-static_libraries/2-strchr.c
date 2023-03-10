#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurence of c if found; else NULL
 *
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
