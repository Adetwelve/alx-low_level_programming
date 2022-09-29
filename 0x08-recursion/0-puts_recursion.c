#include "main.h"

/**
 *_puts_recursion - prints a string recusively followed by new line
 *
 *@s: string argument
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
