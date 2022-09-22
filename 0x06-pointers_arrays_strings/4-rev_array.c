#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: the array to be reversed
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int c;
	int d = n - 1;

	for (c = 0; c < d; c++)
	{
		temp = a[c];
		a[c] = a[d];
		a[d] = temp;
		d--;
	}
}
