#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -  assign a random number to the variable n each time it is executed.
 * Complete the source code in order to print
 * whether the number stored in the variable n is positive or negative.
 *
 *  Return: > 0, = 0, < 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
