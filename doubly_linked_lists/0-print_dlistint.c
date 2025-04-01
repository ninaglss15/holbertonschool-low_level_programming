#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - Ajoute un nouveau nœud au début de la liste
* @h: Pointeur vers le premier nœud de la liste
* Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	if (h->n)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
