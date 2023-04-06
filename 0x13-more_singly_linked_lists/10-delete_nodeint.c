#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the listint_t list
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *loopnode = *head;
	listint_t *delnode;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(loopnode);
		return (1);
	}

	while (i < index)
	{
		if (!loopnode || !(loopnode->next))
			return (-1);

		loopnode = loopnode->next;
		i++;
	}

	delnode = loopnode->next;
	loopnode->next = delnode->next;
	free(delnode);

	return (1);
}
