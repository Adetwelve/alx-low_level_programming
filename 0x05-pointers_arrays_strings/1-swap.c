#include "main.h"

/**
 *swap_int - swaps the values of integers
 *
 *@a: 1st parameter
 *@b: 2nd parameter
 */
void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
