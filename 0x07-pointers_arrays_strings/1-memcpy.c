#include "main.h"

/**
 * _memcpy -a function that copies memory area.
 * @dest: memory for storage of what is copied
 * @src: memory from where data is copied
 * @n: number of bytes to copy
 *
 * Return: addresed to dest storage with modified data
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
