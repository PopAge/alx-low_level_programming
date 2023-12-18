#include "main.h"

/**
 * append_text_to_file - Appending text to the end of file
 * @filename: A pointer to the end of the file
 * @text_content: add string to the end of the file
 *
 * Return: If the function fails or filename is NULL - -1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fle, wrt, fle_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			fle_len++;
	}

	fle = open(filename, O_WRONLY | O_APPEND);
	wrt = write(fle, text_content, fle_len);

	if (fle == -1 || wrt == -1)
		return (-1);

	close(fle);

	return (1);
}
