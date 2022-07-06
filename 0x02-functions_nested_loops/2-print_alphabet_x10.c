#include "main.h"
/*
 *print_alphabet_x10 - print alphebet x10
 *
 *Return: 0
 */
void print_alphabet_x10(void);
{
	char w;
	int z;

	for (y = '0'; y <= '9'; y++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
			_putchar('\n');
	}
}
