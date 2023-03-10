#include "main.h"
/**
 * _puts - This function prints a strings to the stdout
 * followed by new line
 * @str: string to print
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
