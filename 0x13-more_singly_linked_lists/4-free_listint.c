#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a  function that frees a listint_t list.
 * @head : the pointer to head node
 *
 * Return: NULL
*/

void free_listint(listint_t *head)
{
	listint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
