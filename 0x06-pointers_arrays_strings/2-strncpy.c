#include "main.h"

/**
 * _strncpy - copies a string to an original string
 *
 * @dest: the buffer
 * @src: the string to be copied
 * @n: the number of bytes to be included in @dest\
 *
 * Return: pointer to the original string @dest
 */
char *_strncpy(char *dest, char *src, int n)
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

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';
	
	return (dest);
}
