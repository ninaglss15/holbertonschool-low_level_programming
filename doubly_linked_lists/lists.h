#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct dlistint_s - structure d'une liste simplement chaînée
* @n: chaîne de caractères (malloc pour allocation dynamique)
* @prev: longueur de la chaîne
* @next: pointeur vers le prochain nœud
*/

typedef struct dlistint_s
{
	int n;

struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
