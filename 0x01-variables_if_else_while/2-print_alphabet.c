#include <stdio.h>

/**
 *main - print alphabet in lower case
 *
 *Return: alway 0 on success
 */
int main(void)
{

	char lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');

		return (0);
}


