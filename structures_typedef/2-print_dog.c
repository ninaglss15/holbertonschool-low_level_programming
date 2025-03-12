#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <string.h>
/**
 * print_dog - Initialize a dog structure
 * @d: Pointer to the dog structure to be initialized
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	return;

	if (d->name == NULL)
	d->name = "(nil)";
	if (d->owner == NULL)
	d->owner = "(nil)";


	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
