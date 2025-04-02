#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list
* @head: Pointer to the pointer of the first node of the list
* @n: Value to store in the new node
* Return: The address of the new node, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	{

		dlistint_t *new = malloc(sizeof(dlistint_t));

		if (new == NULL || head == NULL)
		{
		return (NULL);
		}

		new->n = n;
		new->next = *head;
		new->prev = NULL;

		if (*head != NULL)
		(*head)->prev = new;


		*head = new;
		return (new);
	}
}
