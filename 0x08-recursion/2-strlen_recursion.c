#include "main.h"

/**
 *_strlen_recursion - func to return length of string
 *@s: string parameter
 *Return: length of string 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));

}
