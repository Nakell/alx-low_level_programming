#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_new_buff(char *file);
void close_the_file(int fd);

/**
 * create_new_buff - allocates 1024 bytes of buff
 * @file: the name of the buffer storing chars
 * Return: newly allocated buff size
 */
char *create_new_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to the %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_the_file - closes filedescriptors
 * @fd: the file descriptor to be closed
 */
void close_the_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another
 * @argc: the number of arguments
 * @argv: the array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int _read, _write, file_from, file_to;
	char *bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bytes = create_new_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	_read = read(file_from, bytes, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(bytes);
		exit(98);
		}
		_write = write(file_to, bytes, _read);
		if (file_to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		free(bytes);
		exit(99);
		}
		_read = read(file_from, bytes, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);
	free(bytes);
	close_the_file(file_from);
	close_the_file(file_to);
	return (0);
}
