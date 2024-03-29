#include "main.h"

/**
 * print_binary - a function that prints the binary representation
 * of a number.
 * @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	int i, count = 0;

	unsigned long int binnum;

	for (i = 63; i >= 0; i--)
	{
		binnum  = n >> i;

		if (binnum & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
