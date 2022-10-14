#include "dog.h"
#include <stdlib.h>

/**
 *int_dog -initialize a variable of type 'struct dog'
 *@d: pointer to struct dog
 *@name: pointer to string for name
 *@age: integer for age
 *@owner: pointer to string for owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = *name;
		d->age = age;
		d->owner = owner;
	}
}
