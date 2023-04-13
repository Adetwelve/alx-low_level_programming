#include "search_algos.h"
/**
 *linear_search - using linear search algorithm
 *
 *@array: pointer to the first element of the array
 *@size: is the number of elements in array
 *@value: the value to search for
 *
 *Return: return the value otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
