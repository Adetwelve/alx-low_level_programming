#include "main.h"

/**
 *binary_to_uint - function converts a binary to unsigned int
 *@b: pointer to binary chars
 *
 *Return: int value or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res = res << 1;
		res |= (b[i] - '0');
	}
	return (res);
}
