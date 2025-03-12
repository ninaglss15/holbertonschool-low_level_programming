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

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
