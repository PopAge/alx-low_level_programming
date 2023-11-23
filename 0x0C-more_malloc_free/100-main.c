#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer
 * @buffer: the address of memory
 * @size: the size of the memory to print
 *
 * Return: 0.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int d;

    d = 0;
    while (d < size)
    {
        if (d % 10)
        {
            printf(" ");
        }
        if (!(d % 10) && d)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[d]);
        d++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */

int main(void)

{

	char *p;
	int d;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	d = 0;
	while (d < 98)
	{
	p[d++] = 98;
	}
	simple_print_buffer(p, 98);
	free(p);
	return (0);
}

