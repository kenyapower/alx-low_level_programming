#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert new node to a position
 * @head: pointer to the list
 * @idx: index of the list where new node should be added,
 * starts at 0
 * @n: the integer
 *
 * Return: address of new node, or NULL, if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *start;
	listint_t *position;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	position = *head;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;

	if (idx == 0)
	{
		start->next = *head;
		*head = start;
		return (start);
	}

	for (i = 0; position != NULL; i++)
	{
		if (idx - 1 == i)
		{
			start->next = position->next;
			position->next = start;
			return (start);
		}
		position = position->next;
	}

	free(start);
	return (NULL);
}
