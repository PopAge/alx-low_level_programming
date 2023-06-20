#include <stdio.h>
/**
 * main - entry point for the program
 *
 * Return: 0 if error else  return non zero value
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
