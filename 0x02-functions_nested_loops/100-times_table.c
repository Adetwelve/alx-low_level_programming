#include "main.h"
/**
 *print_time_table - print any integer range 15
 *
 *@n: parameter
 *
 *Return: void
 */
void print_times_table(int n)
{
	int a, b, c, d, e, f;

	while (n != 16)
	{
		for (a = 0; b <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b; d = c / 100; e = (c / 10) % 10;
				f = (c % 100) % 10;
				if (b == 0)
				{
					_putchar('0');
				}
				else if (c < 10)
				{
					_putchar(' '); _putchar(' ');
					_putchar('0' + f);
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar('0' + e); _putchar('0' + f);
				}
				else
				{
					_putchar('0' + d);
					_putchar('0' + e);
					_putchar('0' + f);
				}
				if (b < n)
				{
					_putchar(','); _putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	} 
}
