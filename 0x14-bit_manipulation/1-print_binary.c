#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)

{
	int x, counter = 0;
	unsigned long int bnum;

	for (x = 60; x >= 0; x--)
	{
		bnum = n >> x;

		if (bnum & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
