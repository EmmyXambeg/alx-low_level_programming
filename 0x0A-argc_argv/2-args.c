#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints all arguments it receives.
 * @argv: the array of arguments
 * @argc: the number of argument recieved
 *
 * Return: 0 Always
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
