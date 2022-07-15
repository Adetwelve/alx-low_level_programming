#include "main.h"


/**
 *_strcmp - comparing
 *@s1:1st parameter
 *@s2: 2nd parameter
 *Return: diff of s1 & s2
 */
int _strcmp(char *s1, char *s2)
{



	int j = 0;

	while (*(s1 + j) && *(s2 + j) && (*(s1 + j) == *(s2 + j)))
		j++;
	return (*(s1 + j) - *(s2 + j));
}
