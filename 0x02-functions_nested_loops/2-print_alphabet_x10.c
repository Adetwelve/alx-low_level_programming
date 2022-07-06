#include "main.h"
/*
 *print_alphabet_x10 - print alphebet x10
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char w, i;

	for (i = '0'; i <= '9'; i++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
			_putchar('\n');
	}
}
