#include "main.h"

/**
 *puts2 - print every other character of a string.
 *starting with 1st character, followed by new line
 *
 * @str: string
 */
void puts2(char *str)
{
	int len = 0;
	int a = 0;

	while (str[len])
		len++;

	while (a < len)
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
