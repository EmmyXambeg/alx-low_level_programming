#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to head node
 * @index: nth index of the node
 *
 * Return: returns address of node if not exist NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *nthnode = head;

	while (nthnode && count < index)
	{
		count++;
		nthnode = nthnode->next;
	}

	if (!nthnode)
		return (NULL);

	return (nthnode);
}
