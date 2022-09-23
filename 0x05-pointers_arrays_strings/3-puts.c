#include "main.h"

/**
 * _puts - this function prints out a string, followed by a new line
 *
 * @str: the string to be printed out
 *
 * Return: the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
