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
	int i;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = 2 * sum + (b[i] - '0');
	}

	return (sum);
}
