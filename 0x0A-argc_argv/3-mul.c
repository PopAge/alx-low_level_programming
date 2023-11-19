#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplcation of two numbers
 * @argc: argument to be counted
 * @argv: vector of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x1 = 0, y2 = 0;

	if (argc == 3)
	{
		x1 = atoi(argv[1]);
		y2 = atoi(argv[2]);
		printf("%d\n", x1 * y2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
