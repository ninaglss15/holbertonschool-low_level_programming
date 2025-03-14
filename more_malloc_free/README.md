0-malloc_checked.c : Écrire une fonction qui alloue de la mémoire avec malloc.

Prototype : void *malloc_checked(unsigned int b);
Retourne un pointeur vers la mémoire allouée. Si malloc échoue, la fonction provoque la terminaison normale du processus avec un code de statut 98.
1-string_nconcat.c : Écrire une fonction qui concatène deux chaînes de caractères.

Prototype : char *string_nconcat(char *s1, char *s2, unsigned int n);
Retourne un pointeur vers un espace mémoire nouvellement alloué contenant s1, suivi des n premiers caractères de s2, et terminé par un caractère nul. Si n est supérieur ou égal à la longueur de s2, utiliser toute la chaîne s2. Retourne NULL en cas d'échec.
2-calloc.c : Écrire une fonction qui alloue de la mémoire pour un tableau avec malloc.

Prototype : void *_calloc(unsigned int nmemb, unsigned int size);
Alloue de la mémoire pour un tableau de nmemb éléments de size octets chacun, initialise la mémoire à zéro, et retourne un pointeur vers la mémoire allouée. Retourne NULL si nmemb ou size est 0 ou si l'allocation échoue.
3-array_range.c : Écrire une fonction qui crée un tableau d'entiers.

Prototype : int *array_range(int min, int max);
Crée un tableau contenant tous les entiers de min à max inclus, dans l'ordre croissant. Retourne un pointeur vers le tableau créé. Si min > max ou si l'allocation échoue, retourne NULL.
