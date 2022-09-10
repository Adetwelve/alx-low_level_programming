#include <stdio.h>

/**
 *main - print lowercase  alphabet in reverse order
 *
 *Return: always 0
 */
int main(void)
{
	char l;

	l = 'z';
		while (l >= 'a')
		{
			putchar(l);
			l--;
		}
		putchar('\n');

		return (0);
}
