#include "main.h"
#include <stdlib.h>

/**
 *create_array - array of chars
 * @size: array size
 * @c: char of an array
 *
 * Return: The filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int z;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
	{
		s[z] = c;
	}
	return (s);
}
