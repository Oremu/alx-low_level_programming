#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints a combination of all three listed digit numbers.
 *
 * Return: (0)
 */
int main(void)
{
	int hundreds = 'a';
	int tens = 'b';
	int ones =  'c';
	int combo;

	for (combo = 0; combo < 1000; combo++)
	{
		a = combo / 100;
		b = (combo / 10) % 10;
		c = num % 10;

		if (a < b && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');

			if (combo < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
