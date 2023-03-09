#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - check if an integer is a prime number or not
 * @n: number to be checked
 * Return: 1 if Success or 0 if failed
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - checks if  number is prime recusively
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if Success ot 0 if failed
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
