#include "main.h"

/**
 *_palindrome - obtains length of a
 *@i: string
 *@j: integer to count length
 *Return: On success 1.
 */
int _palindrome(char *i, int j)
{
	if (*i == 0)
		return (j - 1);
	return (_palindrome(i + 1, j + 1));
}
/**
 * at_palindrome - compares string vs string reverse
 * @i: string
 * @j: length
 * Return: On success 1.
 */

int at_palindrome(char *i, int j)
{
	if (*i != *(i + j))
		return (0);
	else if (*i == 0)
		return (1);
	return (at_palindrome(i + j, j - 2));
}
/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string to evaluate
 *Return: On success 1.
 */
int is_palindrome(char *s)
{
	int j;

	j = _palindrome(s, 0);
	return (at_palindrome(s, j));
}
