#include <stdio.h>
#include "lists.h"

/**
* free_list - Ajoute un nouveau nœud au début de la liste
* @head: Pointeur vers le premier nœud de la liste
* Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
*/

void free_list(list_t *head)
{
	list_t *tmp = head;


	while (head != NULL)
	{
	tmp = head;
	head = tmp->next;

	free(tmp->str);
	free(tmp);
	}
}
