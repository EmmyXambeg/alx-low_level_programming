#include "main.h"
/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line.
 * functions like puts
 * @s: input string
 * Return: 0 Always
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
