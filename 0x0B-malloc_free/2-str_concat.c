#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1 to concat
 * @s2: string 2 to concat
 *
 * Return: pointer to concat string of s1 & s2
*/

char *str_concat(char *s1, char *s2)
{
	int i, ci;
	char *conct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';

	return (conct);
}

