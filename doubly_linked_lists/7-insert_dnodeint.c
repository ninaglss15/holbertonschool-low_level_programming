#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Ajoute un nouveau nœud au début de la liste
* @h: Pointeur vers le premier nœud de la liste
* @idx: index specifique
* @n: variable
* Return: L'resse du nouveau nœud, ou NULL en cas d'échec
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int count;

	temp = *h;
	count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}


	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}


	new->next = temp->next;
	new->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new;

	temp->next = new;

	return (new);
}
