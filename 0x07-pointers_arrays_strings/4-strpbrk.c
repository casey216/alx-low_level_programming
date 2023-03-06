#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - bytes
 *
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s++)
	{
		while (*accept++)
		{
			if (*s == *accept)
				return (s);
		}
	}

	return (NULL);
}

