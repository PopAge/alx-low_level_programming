#include "main.h"
#include <stdlib.h>

/**
 * str_concat - input and add together for size
 * @s1: input to concatinate
 * @s2: input two to concattinate
 * Return: 1 or 2
 *
 */

char *str_concat(char *s1, char *s2)

{
	char *conct;
	int AB, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	AB = ci = 0;
	while (s1[AB] != '\0')
		AB++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (AB + ci + 1));

	if (conct == NULL)
		return (NULL);
	AB = ci = 0;
	while (s1[AB] != '\0')
	{
		conct[AB] = s1[AB];
		AB++;
	}

	while (s2[ci] != '\0')
	{
		conct[AB] = s2[ci];
		AB++, ci++;
	}
	conct[AB] = '\0';
	return (conct);
}
