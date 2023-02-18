#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this is a program whic will determine and print whether the number stored in a variable is positive or negative
 * Return: 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n" n);
	else if (n == 0)
		printf("%d is zero\n" n);
	else
		printf("%d is positive\n" n);
	return (0);
}
