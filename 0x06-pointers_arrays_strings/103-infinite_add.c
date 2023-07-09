#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, x1, y1, x2, y2, add = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	if (x >= y)
		y1 = x;
	else
		y1 = y;
	if (size_r <= y1 + 1)
		return (0);
	r[y1 + 1] = '\0';
	x--, y--, size_r--;
	x2 = *(n1 + x) - 48, y2 = *(n2 + y) - 48;
	while (y1 >= 0)
	{
		x1 = x2 + y2 + add;
		if (x1 >= 10)
			add = x1 / 10;
		else
			add = 0;
		if (x1 > 0)
		*(r + y1) = (x1 % 10) + 48;
		else
			*(r + y1) = '0';
		if (x > 0)
			x--, x2 = *(n1 + x) - 48;
		else
			x2 = 0;
		if (y > 0)
			y--, y2 = *(n2 + y) - 48;
		else
			y2 = 0;
		y1--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
