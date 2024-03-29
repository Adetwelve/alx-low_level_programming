#include "main.h"

/**
 *puts_half - prints half of a string, newline.
 *
 *@str: string
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	int isEven;

	while (str[len])
		len++;

	isEven = len % 2 == 0;
	n = (isEven ? len : len - 1) / 2;
		n += isEven ? 0 : 1;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
