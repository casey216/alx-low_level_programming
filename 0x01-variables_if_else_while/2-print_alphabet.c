#include <stdio.h>
/**
 * main - prints the alphabet in lower case,
 * followed by a new line
 * Return: 0 if no errors, return non-zero if errors
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
