#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to be searched
 * @needle: the string to be searched for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

