#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to listint_t to print
 *
 * Return: the number of nodes printed
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
