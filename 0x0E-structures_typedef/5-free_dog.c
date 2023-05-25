#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This functions frees the dog
 * @d: The dog being freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
