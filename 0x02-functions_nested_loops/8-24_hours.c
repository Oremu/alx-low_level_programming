#include "main.h"

/**
 * Jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers
 */
void Jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 60; m++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putcahr((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
