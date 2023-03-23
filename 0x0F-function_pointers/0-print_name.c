#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - use a poointer function to pint a given name
 * @name: sting name  toprint
 * @f: pointer function to use
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
