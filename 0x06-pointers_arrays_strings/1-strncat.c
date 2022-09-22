#include "main.h"

/**
 * _strncat - this function concatenates two strings
 *
 * @dest: original string
 * @src: string to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int a;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (a = 0; a < n; a++)
	{
		dest[len2] = src[a];
		len2++;
	}
	return (dest);
