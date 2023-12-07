#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 * @filename: Name of teh file
 * @text_content: Content of the file to creat
 * Return: 1 if on success, -1 if failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdo;
	int lent;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdo == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (lent = 0; text_content[lent] != '\0';)
		lent++;
	write(fdo, text_content, lent);
	close(fdo);

	return (1);
}
