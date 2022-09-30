#include "main.h"

/**
 *factorial - give factorial of a number
 *
 *@n: parameter
 *
 * Return:  always 0 on success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
