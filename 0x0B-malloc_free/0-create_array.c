#include <stdlib.h>
#include "main.h"

/**
 *create_array - create array of chars and initialize with char
 *
 *@size: size of array to be created
 *@c: char to be initialized
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(array) * size);
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c
	}

}
