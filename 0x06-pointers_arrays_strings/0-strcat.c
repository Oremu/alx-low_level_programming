#include "main.h"

/**
 * _strcat _ this is a function strcat
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int a;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (a = 0; a <= len1; a++)
	{
		dest[len2] = src[1];
		len2++;
	}
	return (dest);
}
