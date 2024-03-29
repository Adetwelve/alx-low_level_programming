#include "variadic_functions.h"

/**
 *sum_them_all - return sum of all the parameters
 *
 *@n: count of extra parameters
 *
 *Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(all, n);

	for (i = 0; i < n; i++)
		sum += va_arg(all, int);
	va_end(all);

	return (sum);
}
