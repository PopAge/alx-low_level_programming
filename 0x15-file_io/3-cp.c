#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file_desc);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @file_desc: The file descriptor to be closed.
 */
void close_file(int file_desc)
{
	int x;

	x = close(file_desc);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_desc %d\n", file_desc);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description:
 * If the argument count is incorrect - exit code 97.
 * If file_cpfrm does not exist or cannot be read - exit code 98.
 * If file_cpto cannot be created or written to - exit code 99.
 * If file_cpto or file_cpfrom cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int cpfrom, cpto, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_cpfrom file_cpto\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	cpfrom = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	cpto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (cpfrom == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(cpto, buffer, rd);
		if (cpto == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(cpfrom, buffer, 1024);
		cpto = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(cpfrom);
	close_file(cpto);

	return (0);
}
