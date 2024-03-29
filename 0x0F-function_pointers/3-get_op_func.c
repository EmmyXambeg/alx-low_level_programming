#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: the operand passd as argument
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
