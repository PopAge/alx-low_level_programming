#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 for big, 1 small
 */

int get_endianness(void)

{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c);
}
