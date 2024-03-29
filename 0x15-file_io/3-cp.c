#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * ErrExit - handles error
 * @errName: error name.
 * @fd: file descriptor number.
 * @er_type: type of error to be checked.
 *
 * Return: nothing.
*/
void ErrExit(char *errName, int fd, int er_type)
{
	if (er_type == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", errName);
		exit(98);
	}
	else if (er_type == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", errName);
		exit(99);
	}
	else if (er_type == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * fcopy - copys the content of the first file to the second file.
 * @fromf: a file which we will copy from.
 * @tof: a file where we copy to.
 *
 * Return: nothing.
*/
void fcopy(char *fromf, char *tof)
{
	char buff[1024];
	int fdfrom, fdto, flag, end, fdc, err;
/* Opening a file where we copy the content */
	fdfrom = open(fromf, O_RDONLY);
	if (fdfrom == -1)
		ErrExit(fromf, fdfrom, 1);

/* Opening destination file or creating if it doesn't exist*/
	flag = O_CREAT | O_WRONLY | O_EXCL;
	fdto = open(tof, flag, 0664);
	if (fdto == -1)
	{
		fdto = open(tof, O_WRONLY | O_TRUNC);
		if (fdto == -1)
			ErrExit(tof, fdto, 2);
	}

/* copying the content to our copy destination */
	end = 1024;
	while (end == 1024)
	{
		end = read(fdfrom, buff, 1024);
		if (end == -1)
			ErrExit(fromf, fdfrom, 1);

		err = write(fdto, buff, end);
		if (err == -1)
			ErrExit(tof, fdto, 2);
	}
	fdc = close(fdfrom);
	if (fdc == -1)
		ErrExit("n/a", fdfrom, 3);

	fdc = close(fdto);
	if (fdc == -1)
		ErrExit("n/a", fdto, 3);
}

/**
 * main - execution point of copy program.
 * @ac: number of arguments passed to main.
 * @av: the arguments passed.
 *
 * Return: 0 on succes.
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fcopy(av[1], av[2]);

	return (0);
}

