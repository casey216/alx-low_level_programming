#include <stdio.h>
#include "main.h"

/**
 *
 * main - prints the name of the program
 *
 * @argc: number of command line arguments
 * @argv: array of size argc
 *
 * Return: 0 if sucessful
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
