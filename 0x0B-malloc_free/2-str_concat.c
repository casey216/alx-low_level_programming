#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string variable
 * @s2: second string variable
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, k, l;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	concat_str = malloc(sizeof(char) * (i + j) + 1);

	if (concat_str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat_str[k] = s1[k];

	for (l = 0; l <= j; l++)
		concat_str[l + k] = s2[l];

	return (concat_str);
}
