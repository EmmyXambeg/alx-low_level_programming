#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * void free_listint2(listint_t **head);
 * @head: pointer to listint_t
*/

void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	while (*head)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
	}
	*head = NULL;
}
