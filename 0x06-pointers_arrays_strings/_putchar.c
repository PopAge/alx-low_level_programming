#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the char to print
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1,, &c, 1));
}
