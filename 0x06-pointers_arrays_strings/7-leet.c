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
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j = 0;

	while (z[i])
	{
		for (j = 0; arr[j]; j++)
		{
			if (z[i] == arr[j])
				z[i] = replace[j];
		}
		i++;
	}
	return (z);
}
