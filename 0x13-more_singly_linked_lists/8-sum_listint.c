#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function to get sum of data(n) of linked list
 * @head: pointer to list
 *
 * Return: sum of data in linked list,if list empty return 0
 */
int sum_listint(listint_t *head)
{
	int nodesum = 0;

	while (head)
	{
	nodesum = nodesum + head->n;

	if (head->next)
		head = head->next;
	else
		break;
	}
	return (nodesum);
}
