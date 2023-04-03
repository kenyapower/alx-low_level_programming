#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function to add new node to end of list
 * @head: pointer to list
 * @n: the integer
 *
 * Return: address of a new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start;
	listint_t *end;

	if (head == NULL)
		return (NULL);

	end = *head;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = NULL;

	if (*head == NULL)
	{
		*head = start;
		return (start);
	}
	while (end->next)
		end = end->next;
	end->next = start;

	return (start);
}
