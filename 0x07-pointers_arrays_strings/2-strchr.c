#include <stdio.h>

/**
 *_strchr - locates a character in a string
 *@s: string to check
 *@c: character to check
 *
 *Return: a pointer to the first occurrence of the
 *character c in the string s,
 *or null if character not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i)  == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
