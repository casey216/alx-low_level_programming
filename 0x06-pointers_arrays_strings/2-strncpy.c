#include "main.h"

/**
 * _strncpy - copy a string from src to dest
 * @src: source string
 * @dest: destination string
 * @n: number of bytes of src to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
