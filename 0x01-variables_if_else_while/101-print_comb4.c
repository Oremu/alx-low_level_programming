#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints a combination of all three listed digit numbers.
 *
 * Return: (0)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;
	int combo;

	for (combo = 0; combo < 1000; combo++)
	{
		hundreds = combo / 100;
		tens = (combo / 10) % 10;
		ones = num % 10;

		if (hundreds < tens && tens < ones)
		{
			putchar(hundreds + '0');
			putchar(tens + '0');
			putchar(ones + '0');

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
