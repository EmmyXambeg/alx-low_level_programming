#include "main.h"

/**
 * flip_bits - a  function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: returns number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int bit;
	unsigned long int power = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bit = power >> i;
		if (bit & 1)
			count++;
	}
	return (count);
}
