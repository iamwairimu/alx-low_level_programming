#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d:struct dog pointer to initialize
 * @name: to initialize
 * @age: to initialize
 * @owner: to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
