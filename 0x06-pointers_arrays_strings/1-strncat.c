#include "main.h"
#include <string.h>

/**
 *_strncat - function append src to dest
 *@dest:1st parameter
 *@src: 2nd parameter
 *@n:3rd parameter
 *Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

