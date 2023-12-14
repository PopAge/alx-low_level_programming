#include "main.h"

/**
 * binary_to_uint - the function converts a binary number to unsigned int
 * @b: binary number
 *
 * Return: the converted number of binary
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dnum = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dnum = 2 * dnum + (b[x] - '0');
	}

	return (dnum);
}
