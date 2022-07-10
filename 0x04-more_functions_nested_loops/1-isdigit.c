#include "main.h"

/**
 *_isdigit - function to check for a digit
 *@c: integer argument
 *Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
