#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @size: the number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * @array: array of elements to search
 *
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
