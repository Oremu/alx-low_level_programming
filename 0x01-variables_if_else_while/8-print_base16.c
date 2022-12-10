#include <stdio.h>
/**
 * main - print if the number is positive, zero or negative
 *description: the program prints a positive, zero or negative integer
 * return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

