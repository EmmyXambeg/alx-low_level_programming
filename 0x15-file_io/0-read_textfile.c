#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file to be read
 * @letters: number of letters to read
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t write_stdout;
	ssize_t read_stdout;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	read_stdout = read(fd, buffer, letters);
	write_stdout = write(STDOUT_FILENO, buffer, read_stdout);

	free(buffer);
	close(fd);
	return (write_stdout);
}
