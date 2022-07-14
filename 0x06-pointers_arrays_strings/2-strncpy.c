#include "main.h"
#include <string.h>
/**
 *_strncpy - copy n byt of src to dest
 *@dest: string to to copy to destination
 *@src: strign copied Source
 *@n: bytes to copy
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
