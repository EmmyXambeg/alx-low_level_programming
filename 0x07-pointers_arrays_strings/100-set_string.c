#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: char to set the value of pointer to a pointer to
 * Return: 0 Success;
*/

void set_string(char **s, char *to)
{
	*s = to;
}
