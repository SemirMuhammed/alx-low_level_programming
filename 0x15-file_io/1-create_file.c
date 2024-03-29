#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, tcc = 0, wc;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[tcc])
			tcc++;

		wc = write(fd, &text_content[0], tcc);
		if (wc == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
