#include "main.h"
#include <stdio.h>

/**
 * main - argument content to be printed
 * @argc: argument content to count
 * @argv: vector of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
	printf("%s\n", argv[g]);
	}

	return (0);
}
