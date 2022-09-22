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
	int a;
	int b = n - 1;

	for (a = 0; a < b; a++)
	{
		temp = a[a];
		a[a] = a[b];
		a[b] = temp;
		b--;
	}
}
