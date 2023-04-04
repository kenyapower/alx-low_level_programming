#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to return nth node of linked list
 * @head: pointer to the list
 * @index: index of node, starting at 0
 *
 * Return: nth node and if does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	for (j = 1; j <= index; j++)
	{
		if (head->next)
			head = head->next;
		else

		return (NULL);
	}
	return (head);
}
