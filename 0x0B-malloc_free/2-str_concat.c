#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *
 *@s1: parameter
 *@s2: parameter
 *
 * Return: pointer to the new allocated space in memory else NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *snew;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	snew = malloc(sizeof(char) * k);
	if (snew == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		snew[l] = s1[l];
	for (l = 0; l < j; l++)
		snew[l + i] = s2[l];
	snew[i + j] = '\0';
	return (snew);
}
