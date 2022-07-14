#include "main.h"

/**
 *string_toupper - converting any string to upper case
 *@x : string parameter
 *Return: string
 */
char *string_toupper(char *x)
{
	int j = 0;

	while (x[j])
	{
		if (x[j] >= 97 && x[j] <= 122)
			x[j] = x[j] - 32;
		j++;
	}
	return (x);
}
