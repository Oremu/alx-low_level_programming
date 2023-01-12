#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks strings for digits
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)

{
	unsigned int p;

	p = 0;
	while (p < strlen(str))
	{
		if (!isdigit(str[p]))
		{
			return (0);
		}

		p++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int p;
	int str_to_int;
	int sum = 0;

	p = 1;
	while (p < argc)
	{
		if (check_num(argv[p]))
		{
			str_to_int = atoi(argv[p]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		p++;
	}
	printf("%d\n", sum);

	return (0);
}
