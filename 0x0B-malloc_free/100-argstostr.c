#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * of your program.
 * @ac: int input
 * @av: double pointer array of char
 *
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
			str[r++] = '\n';
	}
	return (str);
}
