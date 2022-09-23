#include "main.h"

/**
 * _strcpy -this function copies a string including the null to a buffer
 *
 * @dest: buffer
 * @src: this points to the string
 *
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
