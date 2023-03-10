#include <stdio.h>
#include "main.h"

/**
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
	printf("%s\n", argv[argc - argc]);

	return (0);
}
