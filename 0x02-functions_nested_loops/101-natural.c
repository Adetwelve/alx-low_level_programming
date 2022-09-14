#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	while (i < 10)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}

			i++;
	}
	printf("%d\n", sum);

	return (0);
}
