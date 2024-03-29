#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete head node from linked list
 * @head: pointer to the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
