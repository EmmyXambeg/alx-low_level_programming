#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: pointer to the linked list
 *
 * Return: number of elements in linked list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
