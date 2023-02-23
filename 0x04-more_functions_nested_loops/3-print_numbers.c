#include "main.h"
/**
 * print_numbers - prints numbers 0 -9, followed bya new line
 * Return: 0 (Success)
*/
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
		_putchar(c);
	_putchar('\n');
}
