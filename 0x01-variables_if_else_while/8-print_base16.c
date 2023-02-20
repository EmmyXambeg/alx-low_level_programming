 #include <stdio.h>
/**
 * main - A program all the number of base 16 in lowecase
 * Return: 0 (Success)
*/

int main(void)
{
char c;

int d;

c = 'a';
while (d < 10)
{
	putchar(d + '0');
	d++;
}
while (c <= 'f')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
