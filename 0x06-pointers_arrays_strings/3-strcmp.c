#include "main.h"

/**
 *_strcmp - compare two string
 *@s1: 1st string
 *@s2: 2nd string
 *
 *Return: 0 if similar, +ve number if s1 > s2 else negative number
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
