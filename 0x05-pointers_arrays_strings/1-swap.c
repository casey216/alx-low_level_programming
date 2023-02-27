/**
 * swap_int - swap value of two integer variables
 * @a: first integer variable
 * @b: ssecond integer variable
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
