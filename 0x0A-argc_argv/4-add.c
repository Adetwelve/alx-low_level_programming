#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds 2 positive integer.
 *
 *@argc: parameter count.
 *@argv: parameter
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);

}
