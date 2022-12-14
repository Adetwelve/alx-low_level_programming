#include "main.h"
/**
 *_isalpha - checks for alphabetical letters
 *
 *@c: parameter
 *
 *Return: 1 , 0 based on condition meet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
