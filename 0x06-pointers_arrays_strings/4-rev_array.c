#include "main.h"

/**
 *reverse_array - reverses content of array
 *@a: integer to be reversed
 *@n: length of array a
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int j = 0, k;

	n = n - 1;
	while (j < n)
	{
		k = *(a + j);
		*(a + j) = *(a + n);
		*(a + n) = k;
		j++;
		n--;
	}
}
