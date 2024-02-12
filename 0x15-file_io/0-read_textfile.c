#include "main.h"

ssize_t _freturn(ssize_t *fd, char **buf, ssize_t wc);

/**
 * read_textfile - reads a text file and prints it out
 * @filename: text file PATH
 * @letters: the number of letters it should read and print
 *
 * Return: On success the actual number of letters it could read and print
 * If error return 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wc, fd, rc;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	rc = read(fd, buf, letters);
	if (rc == -1)
		return (_freturn(&fd, &buf, 0));

	wc = write(STDOUT_FILENO, buf, rc);
	if (wc == -1)
		return (_freturn(&fd, &buf, 0));

	return (_freturn(&fd, &buf, wc));
}

/**
 * _ferror - handles clean and safe return
 * @fd: file discriptor
 * @buf: buffer
 * @wc: actual number of letters
 *
 * Return: actual number of letters or 0 on error
 */
ssize_t _freturn(ssize_t *fd, char **buf, ssize_t wc)
{
	close(*fd);
	free(*buf);
	return (wc);
}
