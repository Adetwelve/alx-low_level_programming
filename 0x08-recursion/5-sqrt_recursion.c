#include "main.h"

/**
 *_sqrt - funct evaluate 1 to n
 *@i:  same as n
 *@j:iterate from 1 to n
 *Return: 1
 */
int _sqrt(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (_sqrt(i, j + 1));
}
/**
 *_sqrt_recursion - return natural square root of n
 *@n: number
 *Return: 1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
