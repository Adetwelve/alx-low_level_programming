#include "main.h"

/**
 *leet - encode specific character in a string into 1337
 *@s: the string
 *
 *Return: modified string
 */
char *leet(char *s)
{
	int i, x;
	int ch[] = {'4', '3', '0', '7', '1'};
	char lt[] = "aAeEoOtTlL";

	for (i = 0; s[i]; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (s[i] == lt[x])
			{
				s[i] = ch[x / 2];
			}
		}
	}
	return (s);
}
