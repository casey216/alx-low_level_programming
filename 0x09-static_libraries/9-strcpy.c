#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string pointed by src to dest
 * @dest: destination
 * @src: source
 * Return: pointer to a string
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	while (i <= length)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
