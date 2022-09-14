#include"stdio.h"
/**
 *jack_bauer - print every minutes of the day
 *
 *Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l, m, n;

	for (i = 0; i < 24; i++)
	{
		j = i / 10;
		k = i % 10;
		
		for (l = 0; l < 60; l++)
		{
			m = l / 10;
			n = l % 10;

			_putchar('0' + j);
			_putchar('0' + k);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + n);
			_putchar('\n');
		}
	}
}
