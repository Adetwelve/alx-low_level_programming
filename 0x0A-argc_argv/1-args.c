#include <stdio.h>
#include <stdlib.h>

/**
 *main - print number of argumment.
 *
 *@argc: parameter for count
 *@argv: parameter
 *
 *Return: always 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
