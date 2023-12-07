#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: Name of the file to read
 * @letters: Numbers of letters to read and print
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo;
	char *buff;
	ssize_t fdr, fdw;

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	if (filename == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(buff);
		return (0);
	}
	fdr = read(fdo, buff, letters);
	if (fdr < 0)
	{
		free(buff);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buff, fdr);
	free(buff);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);

}
