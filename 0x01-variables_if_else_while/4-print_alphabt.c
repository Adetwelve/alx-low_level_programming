#include <stdio.h>

/**
 *main - print all letters in lowercase exept q and e
 *
 *Return: always 0
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
