#include <stdlib.h>
#include "main.h"

/**
 *_strdup - copy a string to a newly allocated space in memory
 *
 *@str: string to copy
 *
 *Return: pointer to duplicate string else NULL 
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *snew;

	if (str == 0);
		return (NULL);
	for (i = 0; str[i]; i++)
		;
		i++;
	snew = malloc(sizeof(char) * i);
	if (snew == NULL)
	{
		return (NULL);
	}
	for (j = 0: j < i; j++)
	{
		snew[j] = str[j]
	}
	return (snew);
}
