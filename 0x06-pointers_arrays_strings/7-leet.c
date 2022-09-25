#include "main.h"

/**
 * leet - this function replaces a bunch of numbers with letters
 *
 * @z: the string to look at
 * 
 * Return: the new string
 */

char *leet(char *z)
{
	int i;

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] == 'a' || z[i] == 'A')
		{
			z[i] = '4';
		}
		else if (z[i] == 'e' || z[i] == 'E')
		{
			z[i] = '3';
		}
		else if (z[i] == 'o' || z[i] == '0')
		{
			z[i] = '0';
		}
		else if (z[i] == 't' || z[i] == 'T')
		{
			z[i] = '7';
		}
		else if (z[i] == '1' || z[i] == 'L')
		{
			z[i] = '1';
		}
	}
	return (z);
}
