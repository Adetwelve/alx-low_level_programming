#include <stdio.h>

/**
 *main - print all possible combination of single digit.
 *
 *Return: always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{

		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
