#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' is printed
 * use _putchar to print
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
																							}
			_putchar('\\');
			_putchar('\n');
			i++;
			n--;
	}
	if (i < 1)
		_putchar('\n');
}
