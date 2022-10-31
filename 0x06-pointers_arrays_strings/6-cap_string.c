#include "main.h"

/**
 *cap_string - capitalizes all words in a string
 *@n: string
 *Return: caps on the first letter of a seprator
 */
char *cap_string(char *n)
{
	int i, x;
	int cap = 32;
	int seprator[] = {',', ';', '.', '?', '"', 
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == seprator[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
