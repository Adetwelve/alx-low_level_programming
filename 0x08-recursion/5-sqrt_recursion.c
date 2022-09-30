#include "main.h"

int get_sqrt(int n, int p);

/**
 *_sqrt_recursion - return natural square root of a number.
 *
 *@n: parameter
 *
 * Return: returns the natural square root of anumber.
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}

/**
 *get_sqrt - tries to get square root of n by continously
 *comparing the square of possible root to n
 *
 *@n: integer to find sqrt of
 *@p: possible root of n
 *
 *Return: natural square root or -1
 */
int get_sqrt(int n, int p)
{
	int square = p * p;

	if (square == n)
		return (p);
	if (square < n)
		return (get_sqrt(n, ++p));

	return (-1);
}
