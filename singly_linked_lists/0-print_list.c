#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste list_t
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Return: Nombre de nœuds dans la liste
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str)

printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
count++;
}
return (count);
}