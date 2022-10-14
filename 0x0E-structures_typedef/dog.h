#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - structure defination of dog
 *@name: string parameter
 *@age: integer parameter
 *@owner: string parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Type for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
