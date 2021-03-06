#include "main.h"

/**
 *main - main block, solve fizz buzz from numbers 1 to 100
 *Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 *Multiples of both 3 and 5 should print FizzBuzz.
 *Return: 0
 */
void fizz_buzz(void)
{
	int j;

	j = 1;
	while (j <= 100)
	{
	if (j % 3 == 0 && j % 5 == 0)
		printf("FizzBuzz");
	else if (j % 3 == 0)
		printf("Fizz");
	else if (j % 5 == 0)
		printf("Buzz");
	else
		printf("%d", j);

	if (j != 100)
		printf(" ");
		j++;
	}
	printf("\n");


	return (0);
}
