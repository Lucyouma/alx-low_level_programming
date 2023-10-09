#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - type struct dog initialization variable
 * @d: struct dog initailziation pointer
 * @name: initialization name
 * @age: initialization age
 * @owner: initialized owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
