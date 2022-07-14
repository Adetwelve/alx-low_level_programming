#include "main.h"

/**
 *_strcat - function strcat
 *@dest:1st parameter
 *@src: 2nd parameter
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
	int var = 0, i;

	while (dest[var])
		var++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[var] = src[i];
		var += 1;
	}
	dest[var] = '\0';
	return (dest);
}
