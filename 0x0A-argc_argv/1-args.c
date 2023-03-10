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

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
