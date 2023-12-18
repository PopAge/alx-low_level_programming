#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - text file to print  to the STDOUT
 * @filename: text file to read
 * @letters: number of letters that need to be read
 * Return: 0 when failed and FILE  name is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	ssize_t wrt;
	char *buff_m;
	ssize_t file_desc;
	ssize_t rd;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	return (0);

	buff_m = malloc(sizeof(char) * letters);
	rd = read(file_desc, buff_m, letters);
	wrt = write(STDOUT_FILENO, buff_m, rd);

	free(buff_m);
	close(file_desc);
	return (wrt);
}
