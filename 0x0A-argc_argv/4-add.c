#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multipky two numbers
 *
 * @argc: number of command line arguments
 * @argv: array of size argc
 *
 * Return: 0 if sucessful
 *
 */

int main(int argc, char *argv[])
{
	int i, sum;
	char *num;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = argv[i];
		while (*num)
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
