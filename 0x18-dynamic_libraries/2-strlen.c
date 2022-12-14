#include <stdio.h>

/**
 *_strlen - returns length of a string
 *
 *@s: string to find length of s
 *
 *Return: length  of s
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length])
		length++;

	return (length);

}
