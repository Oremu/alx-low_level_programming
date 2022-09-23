#include "main.h"

/**
 * print_rev - this function prints a string in reverse, with a new line
 *
 * @z: the string to be printed in reverse
 *
 * Return: Nothing
 */
void print_rev(char *z)
{
	int len = _strlen(z) - 1;

	while (len >= 0)
	{
		_putchar(z[len]);
		len--;
	}
	_putchar('\n');
}
