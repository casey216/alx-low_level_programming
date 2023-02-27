/**
 * _strlen - returns the length of a string
 * @s: string varible
 * Return: Length of string of type int
 */

int _strlen(char *s)
{
	int length = 0;
	while(*(s++) != '\0')
	{
		length++;
	}

	return (length);
}
