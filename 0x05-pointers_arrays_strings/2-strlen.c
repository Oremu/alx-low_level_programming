#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @z: the string whose length is to be returned
 *
 * Return: the length of the string
 */
int _strlen(char *z)
{
	int a = 0;

	while (z[a] != '\0')
		a++;

	return (a);
}
