#include "main.h"

/**
 *print_number - print integer
 *@n: The integer passed as parameter
 */
void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		print_number(n / 10);
	_putchar((n % 10) + '0');
	}
}
