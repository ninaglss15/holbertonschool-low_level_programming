#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <string.h>
/**
 * struct dog - structure dog information
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
