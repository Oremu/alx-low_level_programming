#include <stdout>
#include "main.h"

/**
 * _isupper - entry point
 * @c: character to check
 * this checks for uppercase characters
 * Return: 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
