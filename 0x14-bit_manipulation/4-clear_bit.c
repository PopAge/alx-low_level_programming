#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: pointer pointing to the number to be changed
 * @index: bit to clear
 * Return: 1 or -1 unsuccessful.
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 33)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
