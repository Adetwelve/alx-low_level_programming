#include "main.h"

/**
 *_strcat - concatenate two string
 *@dest: destination parameter
 *@src: source of string to be appended to destenation
 *
 *Return: always 0 on success
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (dest[len1])
		len1++;

	while (src[len2])
		len2++;

	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}

