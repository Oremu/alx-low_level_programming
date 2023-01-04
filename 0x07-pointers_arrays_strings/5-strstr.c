#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (;haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (!(needle[i]))
				return (haystack);
		}
	}
	return (0);
}
