#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: 0 (Success)
*/

int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{
	if ((c != 'q' && c != 'e') && c <= 'z')
		putchar(c);
	c++;
}
putchar('\n');
return (0);
}
