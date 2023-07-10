#include "main.h"

/**
 * read_textfile - reads it and prints it the stdout
 * @filename: the name of the file to be read from
 * @letters: number of letter to be read from the file.
 *
 * Return: number of letters read or 0 if failed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *BUFFREAD = malloc(sizeof(char) * letters);

	if (BUFFREAD == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nread = read(fd, BUFFREAD, letters);

	nwritten = write(STDOUT_FILENO, BUFFREAD, nread);
	if (nread != nwritten)
		return (0);

	close(fd);
	free(BUFFREAD);
	return (nread);
}

