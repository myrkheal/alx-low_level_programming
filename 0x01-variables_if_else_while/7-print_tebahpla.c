#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: lower case alphabet
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
