#include "main.h"

/**
 * _strcat _ this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a string
 */
char *_strcat(char *dest, const char *src)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a]; a++)
		dset[dest_len++] = src[a];

	return (dest);
}
