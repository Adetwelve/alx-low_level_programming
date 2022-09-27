#include "main.h"

/**
 *_strpbrk - search a string for any of a set of bytes.
 *@s: the string
 *@accept: a set of bytes
 *
 *Return: a pointer to the byte in s that matches one of the bytes
 *in accept, or Null if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
