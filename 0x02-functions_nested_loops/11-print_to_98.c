#include "main.h"
#include "stdio.h"
/**
 *print_to_98 - print form any number to 98
 *
 *@n: parameter
 *
 *Return: void.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
