#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first no
 * @b: second no
 * Return: sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the diff of two numbers.
 * @a: first no
 * @b: second no
 * Return: diff of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: first no
 * @b: second no
 * Return: product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: first no
 * @b: second no
 * Return: division of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two numbers.
 * @a: first no
 * @b: second no
 * Return: remender of division of a and b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
