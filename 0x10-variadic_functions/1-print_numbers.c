#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: A variable arguments of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int idx;

	va_start(numbers, n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(numbers, int));
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
