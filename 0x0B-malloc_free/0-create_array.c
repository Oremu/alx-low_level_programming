#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}

	b = (char *) malloc(sizeof(c));

	if (b == 0)
	{
		return (NULL);
	}

	else
	{
		p = 0;
		while (p < size)
		{
			*(b + p) = c;
			p++;
		}

		return (b);
	}
}
