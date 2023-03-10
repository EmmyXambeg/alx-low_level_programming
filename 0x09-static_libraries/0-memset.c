#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory address to start filling
 * @b: the constant value to be filled
 * @n: the nymber of bytes to be changed
 *
 * Return: a pointer to the array of new values
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
