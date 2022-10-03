#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiply 2 integers.
 *
 *@argc: parameter count
 *@argv: parameter
 *
 * Return: 0 on success, Error otherwise
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}
