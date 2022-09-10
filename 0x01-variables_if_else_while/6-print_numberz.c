#include <stdio.h>

/**
 *main - print single numbers of base 10
 *
 *Return: always 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
