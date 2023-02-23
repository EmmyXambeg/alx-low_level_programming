#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: variable to check
 * Return: 0 Always
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
