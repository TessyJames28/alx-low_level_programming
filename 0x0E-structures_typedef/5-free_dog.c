#include <stdlib.h>
#include "dog.h"

/**
 *  * free_dog - function to free memory for struct
 *   *@d: array
 * Return: nothing
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
