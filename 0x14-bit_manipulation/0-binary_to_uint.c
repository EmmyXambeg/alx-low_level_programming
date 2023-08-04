#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: pointer to a string of 0 and 1 char
 *
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	int is;
	unsigned int sums = 0;

	if (!b)
		return (0);

	for (is = 0; b[is]; is++)
	{
		if (b[is] < '0' || b[is] > '1')
			return (0);
		sums = 2 * sums + (b[is] - '0');
	}

	return (sums);
}
