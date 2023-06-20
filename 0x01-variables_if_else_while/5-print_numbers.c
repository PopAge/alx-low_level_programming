#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 if no error else return non zero value
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
