dog.h : Définir un nouveau type struct dog avec les éléments suivants :

name (type = char *)
age (type = float)
owner (type = char *)
1-init_dog.c : Fonction qui initialise une variable de type struct dog.

Prototype : void init_dog(struct dog *d, char *name, float age, char *owner);
2-print_dog.c : Fonction qui affiche un struct dog.

Prototype : void print_dog(struct dog *d);
Si un élément est NULL, afficher (nil) à la place (ex : si name est NULL, afficher Name: (nil)).
Si d est NULL, ne rien afficher.
dog.h : Définir un alias dog_t pour struct dog.

4-new_dog.c : Fonction qui crée un nouveau chien.

Prototype : dog_t *new_dog(char *name, float age, char *owner);
Il faut stocker des copies de name et owner. Retourner NULL si l'allocation échoue.
5-free_dog.c : Fonction qui libère un chien.