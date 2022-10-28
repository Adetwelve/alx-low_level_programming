#include "main.h"

/**
 *flip_bits - return no of bits to flip for two numbers to match
 *@n: 1st number
 *@m: 2nd number
 *
 *Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp, i = 1, count = 0;

	/* find the diff bits*/
	tmp = n ^ m;
	/* count ones in the tmp */
	while (tmp >= i)
	{
		if (i & tmp)
			count++;
		if (count >= MAX_COUNT)
			return (count);
		i = i << 1;
	}
	return (count);
}
