#include "main.h"
#include <stdio.h>
/**
 * print_array - prints numbers in an array
 * @a: integer array varible
 * @n: lengtth of array variable
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
		return;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);

	printf("%d\n", a[n - 1]);
}
