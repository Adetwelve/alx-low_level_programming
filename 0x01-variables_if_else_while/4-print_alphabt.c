#include <stdio.h>

/**
 *main - print the alphabet, except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char case;

	for (case = 'a'; case <= 'z'; case++)
	{
		if (case != 'e' && != 'q')
			putchar(case);
	}

	putchar('\n');

	return (0);

}
