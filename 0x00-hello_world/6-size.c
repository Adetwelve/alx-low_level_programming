#include <stdio.h>

/**
 *main - print string.
 *
 *sizeof - function to check size of type.
 *
 *Return: always 0.
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long  lli;
	float f;

	printf("size of char: %lu byte(s)\n", sizeof(c));
	printf("size of int: %lu byte(s)\n", sizeof(i));
	printf("size of long int: %lu byte(s)\n", sizeof(li));
	printf("size of long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of float: %lu byte(s)\n", sizeof(f));

	return (0);
}
