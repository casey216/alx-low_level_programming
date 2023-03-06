#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
