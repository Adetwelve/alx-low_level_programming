#include "main.h"

/**
 *reverse_array - reverse the content of an array
 *@a: the array
 *@n: no of element
 */
void reverse_array(int *a, int n)
{
	int i, k, temp;

	for (i = 0; i < (n / 2); i++)
	{
		k = n - 1;
		temp = a[i];
		a[i] = a[k - i];
		a[k - i] = temp;
	}
}
