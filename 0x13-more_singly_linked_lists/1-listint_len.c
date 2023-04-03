#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked
 * @h: the list
 *
 * Return: the number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
