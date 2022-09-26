#include <stdio.h>

/**
 * main - this function prints the sum of all multiples of 3 or 5 up to 102
 * Return: always (success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	reeturn (0);
}
