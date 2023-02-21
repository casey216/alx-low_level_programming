#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _abs - checks if char is an alphabet
 * @c: The char to be checked
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _abs(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
