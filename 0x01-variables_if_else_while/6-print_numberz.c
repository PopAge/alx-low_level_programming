#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 if error else return non zero value
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
