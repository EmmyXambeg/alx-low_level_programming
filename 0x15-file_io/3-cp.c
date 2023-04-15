#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * create_buffer - create a buffer for 1024 bytes
 * @filename: the name of the file buffer is been created for
 *
 * Return: pointer to new buffer allocation
*/

char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file- close opened files
 * @fd: the fd of files to be closed
 * Description: a function to close all opened file
*/

void close_file(int fd)
{
	int closefile;

	closefile = close(fd);

	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main- a program that copies the content of a file to another file.
 * @argc: number of arguments given to program
 * @argv: array of argument given to the program
 *
 * Return: 0 on success
 *
 * Description:if the number of argument is not the correct one,
 * exit with code 97 and print Usage: cp file_from file_to,
 * followed by a new line, on the POSIX standard error
 *
 * if file_from does not exist, or if you can not read it,
 * exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 *
 * if you can not create or if write to file_to fails,
 * exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 *
 * if you can not close a file descriptor
 * exit with code 100 and print Error: Can't close fd FD_VALUE,
 * followed by a new line, on the POSIX standard error
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, readfile, writefile;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	readfile = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || readfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writefile = write(file_to, buffer, readfile);
		if (file_to == -1 || writefile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readfile = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readfile > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
