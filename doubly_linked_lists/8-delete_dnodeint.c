#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index
* @head: Pointer to the head of the doubly linked list
* @index: Index of the node to be deleted (starting at 0)
*
* Return: 1 if successful, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete;
	unsigned int position;

	if (!head || !*head)
	{
		return (-1);
	}

	node_to_delete = *head;
	position = 0;

	if (index == 0)
	{
		*head = node_to_delete->next;
		if (*head)

			(*head)->prev = NULL;
		free(node_to_delete);

		return (1);
	}

	while (node_to_delete && position < index)
	{
		node_to_delete = node_to_delete->next;
		position++;
	}

	if (!node_to_delete)
		return (-1);

	if (node_to_delete->next)
		node_to_delete->next->prev = node_to_delete->prev;

	if (node_to_delete->prev)

		node_to_delete->prev->next = node_to_delete->next;

	free(node_to_delete);
	return (1);
}
