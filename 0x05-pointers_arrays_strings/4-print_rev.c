#include "main.h"

/**
 *print_rev - print string, in reverse other follow by new line
 *
 *@s: string
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	while (--length >= 0)
		_putchar(s[length]);
	_putchar('\n');
}
