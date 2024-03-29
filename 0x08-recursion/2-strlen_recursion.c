#include "main.h"

/**
 *_strlen_recursion - print length of string recusively
 *
 *@s: parameter
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(++s) + 1);
}
