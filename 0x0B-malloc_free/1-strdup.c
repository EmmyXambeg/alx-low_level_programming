#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates and return pointer to duplicated string
 * @str: the string to be duplicated
 * Return: 0
*/

char *_strdup(char *str)
{
	char *point;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	point = malloc(sizeof(char) * (i + 1));
	if (point == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		point[r] = str[r];

	return (point);
}
