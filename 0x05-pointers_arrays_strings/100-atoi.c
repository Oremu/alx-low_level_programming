#include "main.h"
#include <stdio.h>
/**
 * main - converts a string to an integer
 * 
 * @a: input string
 *
 * return: integer
 */
int _atoi(char *a)
{
	int sign;
	int result, index;

	result = 0;
	sign = 0;

	for (index = 0; a[index] != '\0'; index++)
	{
		if (a[index] == '-')
		{
			sign++;
		}
		if (a[index] > 47 && a[index] < 58)
		{
			while (a[index] > 47 && a[index] < 58)
			{
				result = result * 10 - (a[index++] - 48);
				break;
			}
		}
	}
	return (result *= sign % 2 == 0? -1 : 1);
}
