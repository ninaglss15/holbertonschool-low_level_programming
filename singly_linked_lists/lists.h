#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct list_s - structure d'une liste simplement chaînée
* @str: chaîne de caractères (malloc pour allocation dynamique)
* @len: longueur de la chaîne
* @next: pointeur vers le prochain nœud
*/

typedef struct list_s
{
char *str;
int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif

