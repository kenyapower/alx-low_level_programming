#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function to free a list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
