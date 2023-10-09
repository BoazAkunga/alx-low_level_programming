#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function frees memory allocated for struct dog
 * @d: struct dog 2 free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
