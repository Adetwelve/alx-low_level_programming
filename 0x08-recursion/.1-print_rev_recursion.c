#includ "main.h"

/**
 *_print_rev_recursion - print string in reverse other
 *
 *@s: string argument
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(++s);
	_putchar(*s);
}