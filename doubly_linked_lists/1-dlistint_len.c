#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - Ajoute un nouveau nœud au début de la liste
* @h: Pointeur vers le premier nœud de la liste
* Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
	if (h->n)
	h = h->next;
	count++;
	}
	return (count);
}
