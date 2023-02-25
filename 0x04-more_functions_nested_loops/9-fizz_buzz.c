#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the number from 1 to 100
 * 3 multiples print fizz instead of the number
 * 5 print buzz instead of number
 * 3 & 5 print fizzbuzz
 * Return: always 0
 */
int main(void)

{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "Fizz buzz";

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
