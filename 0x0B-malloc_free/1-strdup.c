#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies string
 *
 * @str: string to be copied
 *
 * Return: pointer to the copied string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *strcopy;
	unsigned int i, j;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	strcopy = malloc(sizeof(char) * i + 1);

	if (strcopy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strcopy[j] = str[j];

	return (strcopy);
}
