/**
 * _strcat - concatenate string src to string dest
 * @src: source string variable
 * @dest: destination string variable
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
		len2++;

	while (i <= len2)
	{
		dest[i + len2] = src[i];
		i++;
	}

	return dest;
}
