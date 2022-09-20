#include "main.h"

/**
 *rev_string - Reverse a string
 *
 *@s: string
 */
void rev_string(char *s)
{
	int len = 0;
	int a, b;
	char tp;

	while (s[len])
		len++;

	a = len;
	while (--a >= len / 2)
	{
		b = len - a - 1;
		tp = s[b];
		s[b] = s[a];
		s[a] = tp;
	}
}
