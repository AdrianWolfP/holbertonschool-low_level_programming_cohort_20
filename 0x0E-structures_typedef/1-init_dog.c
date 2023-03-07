#include "dog.h"
#include <stlib.h>
/**
 * init_dog - variable of type
 * @d: pointer
 * @name: dog's name
 * @age: dog's name
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
