#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints n elements of an array of integers
 *
 * @a: the array to be considered
 * @n: the number of elements to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
