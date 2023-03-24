#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: A variable number of string elements
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int idx;

	va_start(strings, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
