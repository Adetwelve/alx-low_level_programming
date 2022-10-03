#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds two positive integer.
 *
 *@argc: parameter count.
 *@argv: parameter
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, a, sum = 0;

	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (!a)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;

	}
	printf("%d\n", sum);

	return (0);

}
