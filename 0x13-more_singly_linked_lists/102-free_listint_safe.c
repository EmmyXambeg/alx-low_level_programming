#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - a  function that frees a listint_t list.
 * @h: pointer to linked_list
 *
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	size_t listlen = 0;
	int pointdiff;
	listint_t *loopnode;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		pointdiff = *h - (*h)->next;
		if (pointdiff > 0)
		{
			loopnode = (*h)->next;
			free(*h);
			*h = loopnode;
			listlen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			listlen++;
			break;
		}
	}
	*h = NULL;

	return (listlen);
}
