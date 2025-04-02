#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - Adds a new node at the beginning of a doubly linked list
* @head: Pointer to the pointer of the first node of the list
* Return: The address of the new node, or NULL if it failed
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;


	while (head != NULL)
	{
	tmp = head;
	head = head->next;

	free(tmp);
	}
}
