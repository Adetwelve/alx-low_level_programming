#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: destination parameter
 *@src: source of string to append
 *@n: number of charaters in string to be appended
 *Return: 0 on success
 */
char *_strncat(char *dest, char *src, int n)
{
	 int i, len1 = 0, len2 = 0;

	while (dest[len1])
		len1++;

	while (src[len2])
		len2++;

	for (i = 0; i < n && i < len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}
