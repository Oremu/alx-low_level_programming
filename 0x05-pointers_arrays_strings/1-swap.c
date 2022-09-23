#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *b;
	*b = *a;
	*a = d;
}
