#include "main.h"
#include "stdio.h"

/**
 *print_diagsums - prints the sum of the two diagonals of a
 *square matrix of integers.
 *@a: the aray
 *@size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, row;
	int firstdiagonalsum = 0;
	int seconddiagonalsum = 0;
	int total = size * size;

	for (i = 0; i < total; i += size)
	{
		row = i / size;
		firstdiagonalsum += a[i + row];
		seconddiagonalsum += a[i + size - row - 1];
	}
	printf("%d, %d\n", firstdiagonalsum, seconddiagonalsum);
}
