#include "main.h"

/**
 *reverse_array - reverse the content of an array
 *@a: the array
 *@n: no of element
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n / 2); i++)
	{
		n = n - 1;
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
