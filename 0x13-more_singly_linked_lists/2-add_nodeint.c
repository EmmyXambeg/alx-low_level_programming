#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: address of head node
 * @n: number to store in new node
 *
 * Return: address of the new elements or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));
	if (!newlist)
		return (NULL);

	newlist->n = n;
	newlist->next = *head;
	*head = newlist;
	return (newlist);
}
