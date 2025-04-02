#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Récupère le nœud à un index donné
 * @head: Pointeur vers le premier nœud de la liste
 * @index: Index du nœud recherché (en commençant à 0)
 * Return: Pointeur vers le nœud à l’index donné
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
	return (NULL);
	}
	while (head != NULL)
	{
	if (i == index)
	return (head);

	head = head->next;
	i++;
	}
	return (NULL);
}
