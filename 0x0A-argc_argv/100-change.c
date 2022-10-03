#include <stdio.h>
#include <stdlib.h>

/**
 *main - print mininimum number of coins to make change
 *
 *@argc: parameter count
 *@argv: parameter
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int b = 0, d;
	int a;
	unsigned int i;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			d = a / cent[i];
			a -= d * cent[i];
			b += d;
			if (a == 0)
				break;
		}

	}
	printf("%d\n", b);
	return (0);
}
