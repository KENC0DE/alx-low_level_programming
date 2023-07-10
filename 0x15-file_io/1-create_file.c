#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name to be created.
 * @text_content: content of the file.
 *
 * Return: 1 if successful -1 if not.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, e, len = 0, flag = O_CREAT | O_WRONLY | O_EXCL;

	if (filename == NULL)
		return (-1);

	fd = open(filename, flag, 0600);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}

	if (text_content)
		len = strlen(text_content);

	if (len)
		e = write(fd, text_content, len);

	if (e == -1)
		return (-1);

	close(fd);
	return (1);

}

