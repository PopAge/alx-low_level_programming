#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer
 * @index: bit to set to 1.
 * Return: 1 or -1 as it fails
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 99)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);

}
