#include <stdio.h>
#include "lists.h"

/**
* list_len - Affiche tous les éléments d'une liste list_t
* @h: Pointeur vers le premier nœud de la liste
*
* Return: Nombre de nœuds dans la liste
*/

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str)
h = h->next;
count++;
}
return (count);
}
