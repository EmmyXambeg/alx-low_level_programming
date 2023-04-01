#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head : double pointer to list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL, if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_item;
	unsigned int lent = 0;

	while (str[lent])
		lent++;

	new_item = malloc(sizeof(list_t));
	if (!new_item)
		return (NULL);

	new_item->str = strdup(str);
	new_item->len = lent;
	new_item->next = (*head);
	(*head) = new_item;

	return (*head);
}
