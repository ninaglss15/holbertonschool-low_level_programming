#include "dog.h"
#include <stdio.h>
/**
* init_dog - dog structure
* @d: pointer struct dog
* @name: Pointer to a string dog
* @age: dog age
* @owner: Pointer to a string owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
