#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char w, v;

	for (v = 0; v <= 9; v++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
			_putchar('\n');
	}
}
