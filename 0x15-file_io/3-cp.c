#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * fcopy - copys the content of the first file to the second file.
 * @fromf: a file which we will copy from.
 * @tof: a file where we copy to.
 *
 * Return: nothing.
*/
void fcopy(char *fromf, char *tof)
{
	char *buff;
	int fdfrom, fdto, flag, end, fdc;
/* Opening a file where we copy the content */
	fdfrom = open(fromf, O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromf);
		exit(98);
	}
/* Opening destination file or creating if it doesn't exist*/
	flag = O_CREAT | O_WRONLY | O_EXCL;
	fdto = open(tof, flag, 0664);
	if (fdto == -1)
	{
		fdto = open(tof, O_WRONLY | O_TRUNC);
		if (fdto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", tof);
			exit(99);
		}
	}
/* copying the content to our copy destination */
	do {
		buff = malloc(sizeof(char) * 1024);
		end = read(fdfrom, buff, 1024);
		write(fdto, buff, end);
		free(buff);
	} while (end);
	fdc = close(fdfrom);
	if (fdc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}
	fdc = close(fdto);
	if (fdc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
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

