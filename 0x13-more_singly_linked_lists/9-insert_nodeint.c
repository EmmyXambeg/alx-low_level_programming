#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head : pointer to first node
 * @idx: index of insert node
 * @n: data of insert node
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode;
	listint_t *loopnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (loopnode && i < idx)
	{
		if (i == idx - 1)
		{
			newnode->next = loopnode->next;
			loopnode->next = newnode;
			return (newnode);
		}
		else
		{
			loopnode = loopnode->next;
			i++;
		}
	}
	return (NULL);
}
