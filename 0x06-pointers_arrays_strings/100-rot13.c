#include "main.h"

/**
 *rot13 - rotate alphabet 13 place
 *@d: string
 *Return: address of d
 */
char *rot13(char *d)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(d + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(d + i))
			{
				*(d + i) = b[j];
				break;
			}
		}
	}
	return (d);
}

