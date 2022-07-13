#include "main.h"

/**
 *rev-string - rev string
 *@s: argument s
 */
void rev_string(char *s)
{
	char var;
	int j, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
	length1++;

	length2 = length1 - 1;
	for (j = 0; j < length1 / 2; j++)
	{

		var = s[j];
		s[j] = s[length2];
		s[length2] = var;
		length2 -= 1;
	}

}
