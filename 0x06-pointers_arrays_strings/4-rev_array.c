#include "main.h"

/**
 * reverse_array - reverses the order of an array of integers
 * @a: an array of integers
 * @n: the number of integers too be arranged
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
