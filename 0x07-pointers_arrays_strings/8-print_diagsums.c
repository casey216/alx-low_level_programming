#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sumLR, sumRL;

	sumLR = 0;
	sumRL = 0;

	for (i = 0; i < size; i++)
	{
		sumLR += a[(size * i) + i];
		sumRL += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sumLR, sumRL);
}

