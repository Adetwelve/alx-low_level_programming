#include <stdio.h>
/**
 *main - print fibonacci
 *
 *Return: always 0
 */
int main(void)
{
	long i = 0, j = 1, k = 0;

	printf("%ld, %ld, ", i, j);
		k = i + j;

	while (k <= 50)
	{
		printf("%ld, ", k);
		i = j;
		j = k;
		k = i + j;

	}
	printf("\n");
	return (0);
}
