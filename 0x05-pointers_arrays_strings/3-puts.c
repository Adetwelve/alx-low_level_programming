#include "main.h"

/**
 *_puts - Prints a string to Stdout.
 *
 *@str: the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
			a++;
	}
	_putchar('\n');
}
