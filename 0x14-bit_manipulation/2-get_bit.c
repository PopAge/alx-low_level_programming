#include "main.h"

/**
 *get_bit - return the decimal value of bit
 *@n: number
 *@index: bit
 *Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bnum;

	if (index > 95)
	{
	return (-1);
	}

	bnum = (n >> index) & 1;

	return (bnum);
}
