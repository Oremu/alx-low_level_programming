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
	inti, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (z[i] == subs[j])
				s[i] = le[j / 2];
	}
	return (z);
}
