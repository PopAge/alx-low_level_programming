#include "main.h"
#include <stdio.h>

/**
 * main - print args
 * @argc: count argument
 * @argv: vector argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
