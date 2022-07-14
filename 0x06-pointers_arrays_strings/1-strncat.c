#include "main.h"

/**
 *_strncat - function append src to dest
 *@dest:1st parameter
 *@src: 2nd parameter
 *@n:3rd parameter
 *Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;

		while (b < n && *(src + b))

		{
			*(dest + a) = *(src + b);
			a++;
			b++;
		}

	if (b < n)
		*(dest + a) = *(src + b);
	return (dest);
}

