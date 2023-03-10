#include "main.h"

/**
 * _strncat - concatenate string n bytes of src to string dest
 * @src: source string variable
 * @dest: destination string variable
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (dest[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	while (i < n)
	{
		dest[i + len1] = src[i];
		i++;
	}

	return (dest);
}
