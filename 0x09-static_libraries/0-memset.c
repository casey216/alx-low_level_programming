#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer to buffer
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to memory buffer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
