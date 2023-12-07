#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - Function that append a text in the end of the file
 * @filename: Name of the file
 * @text_content: The text to be wild append
 * Return: 1 succes, otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, i;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_WRONLY | O_APPEND);
	if (fdo == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; *(text_content + i) != '\0';)
		i++;
	write(fdo, text_content, i);
	close(fdo);
	return (1);
}
