#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a : int1 to swap
 * @b : int2 to swap
*/
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
