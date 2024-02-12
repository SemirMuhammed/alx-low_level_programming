#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 *
 * Exit code :	If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rc = 1, wc;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rc)
	{
		rc = read(file_from, buf, 1024);
		if (file_from == -1 || rc == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wc = write(file_to, buf, rc);
		if (file_to == -1 || wc == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	close_file(file_from);
	close_file(file_to);

	return (0);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
