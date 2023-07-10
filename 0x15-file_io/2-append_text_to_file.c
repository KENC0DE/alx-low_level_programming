#include "main.h"

/**
 * append_text_to_file - appends text to an already text containning file.
 * @filename: file name of the file tha is going to be appended to.
 * @text_content: the text to be append to the file.
 *
 * Return: 1 on success -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, flag = O_WRONLY | O_APPEND;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, flag);
	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}

