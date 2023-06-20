#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 if no error else return non zero value
 */
int  main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
