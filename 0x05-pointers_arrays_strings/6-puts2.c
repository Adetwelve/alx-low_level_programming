#include "main.h"
#include <sring.h>

/**
 *puts2 - print every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int  var, i;

	var = strlen(str);
	for (i = 0; i < var; i += 2)
		_putchar(str[i]);
	_putchar('\n');

}
