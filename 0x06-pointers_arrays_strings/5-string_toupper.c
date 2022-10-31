#include "main.h"

/**
 *string_toupper - change lowercase letters of a string to uppercase
 *@alpha:
 *
 *Return: Modified string
 */
char *string_toupper(char *alpha)
{
	int i = 0;

	while (alpha[i] != '\0')
	{
		if (alpha[i] >= 'a' && alpha[i] <= 'z')
			alpha[i] = alpha[i] - 32;
			i++;
	}
	return (alpha);
}

