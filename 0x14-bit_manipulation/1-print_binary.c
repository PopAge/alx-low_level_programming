#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)

{
	int x, count = 0;
	unsigned long int current;

	for (x = 60; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
		_putchar('0');
}

