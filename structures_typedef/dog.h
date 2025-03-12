#ifndef DOG_H
#define DOG_H

typedef struct dog {
    dog_t my_dog;
    char *name;
    float age;
    char *owner;
} dog;

void print_dog(struct dog *d);

#endif

