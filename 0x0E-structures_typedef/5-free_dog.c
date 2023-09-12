#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the memory allocated for dog
 * @d: pointer to struct dog
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

