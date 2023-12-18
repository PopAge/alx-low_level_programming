#include "main.h"

/**
 * create_file - creates a file
 * @filename: create a file to point to the name
 * @text_content: THE pointer to the string of which to write the file
 * Return: fail --1 or -1
 */

int create_file(const char *filename, char *text_content)

{

	int file_desc, wrt, flen = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (flen = 0; text_content[flen];)
		flen++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wrt = write(file_desc, text_content, flen);
	if (file_desc == -1 || wrt == -1)
		return (-1);

	close(file_desc);
	return (1);
}
