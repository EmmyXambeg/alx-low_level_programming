#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: A pointer to the name of the file
 * @text_content: the NULL terminated string to add to the end of the file.
 * Return: 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	openfile = open(filename, O_WRONLY | O_APPEND);
	writefile = write(openfile, text_content, len);

	if (openfile == -1 || writefile == -1)
		return (-1);

	close(openfile);

	return (1);
}
