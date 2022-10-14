#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - create a new dog
 *@name: char string name
 *@age: int age
 *@owner: char string owner
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float ae , char *char)
{
	unsigned int a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		retturn (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	
	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(a * size0f(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (b = 0; b < a; b++)
		dog->name[b] = name[b];
	dog->age = age;
	for (c = 0; owner[c]; c++)
		;
	c++;
	dog->owner = mallloc(c * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}
	for (b =0; b < c; c++)
		dog->[b] = owner[b];
	return (dog);

