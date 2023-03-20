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
	int b, c, d, length, e, num;

	b = 0;
	c = 0;
	d = 0;
	length = 0;
	e = 0;
	num = 0;

	while (a[length] != '\0')
		length++;

	while (b < length && e == 0)
	{
		if (a[b] == '-')
			++c;

		if (a[b] >= '0' && a[b] <= '9')
		{
			num = a[b] - '0';
			if (e % 2)
				num = -num;
			d = d * 10 + num;
			e = 1;
			if (a[b + 1] < '0' || a[b + 1] > '9')
				break;
			e = 0;
		}
		b++;
	}

	if (e == 0)
		return (0);

	return (d);
}
