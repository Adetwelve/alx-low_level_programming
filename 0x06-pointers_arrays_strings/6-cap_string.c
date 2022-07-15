#include "main.h"
#include <string.h>

/**
 *cap_string - capitalize words in string
 *@d: capitalize string d
 *Return: address
 */
char *cap_string(char *d)
{
	int j = 0, k;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(d + j))
	{
		if (*(d + j) >= 'a' && *(d + j) <= 'z')
		{
			if (j == 0)
				*(d + j) -= 'a' - 'A';
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (a[k] == *(d + j - 1))
						*(d + j) -= 'a' - 'A';
				}
			}
		}
		j++;
	}
	return (d);
}
