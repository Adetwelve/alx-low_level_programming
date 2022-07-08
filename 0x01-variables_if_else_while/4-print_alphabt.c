#include <stdio.h>

/**
 *main - print the alphabet, except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);

}
