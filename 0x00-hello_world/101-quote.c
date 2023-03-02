#include <unistd.h>

/**
 *main - Prints out the last part of a quote in the standard error.
 *Return: 1 if success.
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quo, sizeof(quote) - 1);
	return (1);
}
