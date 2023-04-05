#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data(n)
 * of a listint_t linked list.
 * @head : pointer to head node
 * Return: the sum of all the data (n)
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *loopnode = head;

	while (loopnode)
	{
		sum += loopnode->n;
		loopnode = loopnode->next;
	}

	return (sum);
}
