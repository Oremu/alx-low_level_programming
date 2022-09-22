#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @z: letters to check
 * Return: uppercase letters
 */
char *string_toupper(char *z)
{
	int a;

	for (a = 0; z[a] != '\0'; a++)
	{
		if (z[a] >= 97 && z[a] <= 122)
			z[a] -= 32;
	}
	return (z);
}
