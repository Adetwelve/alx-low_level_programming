#include "main.h"

/**
 * swap_int - 2 integer swap the values they hold
 * @a: variable 1
 * @b: variable 2 
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
