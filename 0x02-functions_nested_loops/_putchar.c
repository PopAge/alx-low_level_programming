#include <unistd.h>
/**
 * _putchar - writes the charater c to standard output
 * @c: The character to be printed
 * Return: on success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
