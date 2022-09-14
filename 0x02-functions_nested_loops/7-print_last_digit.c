#include "main.h"
/**
 *print_last_digit - print te last digit
 *
 *@i: parameter for last digit
 *
 *Return: value of last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
		i = -i;

	j = i % 10;

	if (j < 0)
		j = -j;

	_putchar(j + '0');

	return (j);

}
