#include <stdio.h>
#include "lists.h"

/**
* add_node - Ajoute un nouveau nœud au début de la liste
* @head: Pointeur vers le premier nœud de la liste
* @str: La chaîne de caractères à ajouter au nœud
* Return: L'adresse du nouveau nœud, ou NULL en cas d'échec
*/


list_t *add_node(list_t **head, const char *str)
{
	int length = 0;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || head == NULL)
	{
	return (NULL);
	free(new);
	}
	while (str[length] != '\0')
	{
	length++;
	}

	new->str = strdup(str);
	new->len = length;
	new->next = *head;

	*head = new;
	return (new);
}

