#include "main.h"
#include <stdlib.h>

/**
 * _strdup - the strig should be duplicated.
 * @str: duplicate the string
 *
 * Return: duplicated strings
 */

char *_strdup(char *str)

{

	int z = 0, y = 1;
	char *s;

	if (str == NULL)
	return (NULL);

	while (str[y])
	{


		y++;
	}
	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
	return (NULL);

	while (z < y)
	{
		s[z] = str[z];
		z++;
	}
	s[z] = '\0';
	return (s);
}
