#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add new node at the start of list
 * @head: pointer to list
 * @n: the integer
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	if (head == NULL)
		return (NULL);

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = *head;

	*head = start;
	return (start);
}
