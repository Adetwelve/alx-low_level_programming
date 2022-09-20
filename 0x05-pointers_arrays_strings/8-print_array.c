#include "stdio.h"

/**
 *print_array - prints n element of an array of integers;
 *followed by a newline
 *
 * @a: array
 * @n: number of element of an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], i != n - 1 ? ", " : "");
	printf("\n");
}
