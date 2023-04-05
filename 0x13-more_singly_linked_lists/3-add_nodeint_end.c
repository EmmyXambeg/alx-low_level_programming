#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to head node
 * @n: number to be stored in new node
 *
 * Return: address of new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *fmrlast = *head;

	newlist = malloc(sizeof(listint_t));
	if (!newlist)
		return (NULL);
	newlist->n = n;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}
	while (fmrlast->next)
		fmrlast = fmrlast->next;

	fmrlast->next = newlist;
	return (newlist);
}
