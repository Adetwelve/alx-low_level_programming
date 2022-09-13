#include "main.h"
/**
 *print_alphabet_x10 - print lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alpha = 96;

		while (alpha < 'z')
		{
		alpha++;
		_putchar(alpha);
		}

		count++;
		_putchar('\n');
	}
}
