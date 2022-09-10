#include <stdio.h>

/**
 *main - print all number of base 16 in lowercase
 *
 *Return: always 0.
 */
int main(void)
{
	char n = 48;
	char l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
		return (0);
}
