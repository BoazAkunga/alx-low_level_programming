#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a var of type struct dog
 * @d: Ptr 2 struct dog 2 initialize
 * @name: Name 2 initialize
 * @age: Age 2 initialize
 * @owner: Owner 2 initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
