#include "main.h"
#include <stdio.h>

/**
 * rot13 -encodea a string using rot 13
 * @s: pointer to sting params
 *
 * Return: the decoded string
*/

char *rot13(char *s)
{
	int i, j;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = encode[j];
				break;
			}
		}
	}
	return (s);
}
