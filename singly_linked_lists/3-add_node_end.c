#include <stdio.h>
#include "lists.h"

/**
* add_node_end - Ajoute un nouveau nœud au début de la liste
* @head: Pointeur vers le premier nœud de la liste
* @str: La chaîne de caractères à ajouter au nœud
* Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lenght = 0;

	list_t *new = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (new == NULL)
	{
	return (NULL);
	}

	while (str[lenght] != '\0')
	{
	lenght++;
	}

	new->str = strdup(str);
	new->len = lenght;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	}
	else
	{
		while (lastnode->next != NULL)
		lastnode = lastnode->next;
		lastnode->next = new;
	}
	return (new);
}
