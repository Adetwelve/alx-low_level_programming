#include "main.h"

/**
 *leet - leet function
 *@j: ist parameter
 *Return: string
 */
char *leet(char *j)
{
	int a = 0, b, l = 5;
	char fg[5] = {'A', 'E', 'O', 'T', 'L'};
	char fz[5] = {'4', '3', '0', '7', '1'};

	while (j[a])
	{
		b = 0;

		while (b < l)
		{
			if (j[a] == fg[b] || j[a] - 32 == fg[b])
			j[a] = fz[b];

			b++;
		}
		a++;

	}
	return (j);



}
