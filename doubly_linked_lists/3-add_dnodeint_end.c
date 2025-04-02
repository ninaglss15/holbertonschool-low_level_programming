#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Ajoute un nœud à la fin d'une liste doublement chaînée
* @head: Pointeur vers le premier nœud de la liste
* @n: Valeur à insérer dans le nouveau nœud
* Return: Adresse du nouveau nœud, ou NULL en cas d'échec
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
	new->prev = NULL;
	*head = new;
	return (new);
	}
	last = *head;

	while (last->next != NULL)
	last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}

