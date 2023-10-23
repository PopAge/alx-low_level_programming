#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - output the sum of + numbers
 * @argc: count the number of argument
 * @argv: this is the argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m;
	unsigned int n, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			e = argv[m];
				for (n = 0; n < strlen(e); n++)
				{
				if (e[n] < 48 || e[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
		}
		else
		{
			printf("0\n");
		}
		return (0);
}
