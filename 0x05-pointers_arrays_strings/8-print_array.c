#include "main.h"
/**
 * print_array - a function tht prints n elements of an arry
 * @a: array name
 * @n: number of array elements to print
 * Return: a and n input
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
