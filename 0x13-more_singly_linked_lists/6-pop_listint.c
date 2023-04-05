#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a  function that deletes the head node
 * of a listint_t linked list
 * @head: pointer to linked list
 *
 * Return: returns the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	int headnum;
	listint_t *nextnode;

	if (!head || !*head)
		return (0);

	headnum = (*head)->n;
	nextnode = (*head)->next;
	free(*head);
	*head = nextnode;

	return (headnum);
}
