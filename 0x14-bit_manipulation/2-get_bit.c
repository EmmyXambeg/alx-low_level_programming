#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to search
 * @index: index to search
 *
 * Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bitno;

	if (index > 63)
		return (-1);

	bitno = (n >> index) & 1;

	return (bitno);
}
