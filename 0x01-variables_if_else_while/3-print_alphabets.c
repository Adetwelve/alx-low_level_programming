#include <stdio.h>

/**
 *main - Prints the alphabet in lowercase, and then in uppercase.
 *Return: Always 0.
 */
int main(void)
{
	char case;

	for (case = 'a'; case <= 'z'; case++)
	putchar(case);

	for (case = 'A'; case <= 'Z'; case++)
	putchar(case);

					putchar('\n');

						return (0);
}
