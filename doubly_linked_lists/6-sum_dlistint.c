#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - Adds a new node at the beginning of a doubly linked list
* @head: Pointer to the pointer of the first node of the list
* Return: The address of the new node, or NULL if it failed
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
