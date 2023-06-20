#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 if  no error else return non zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
