#include "main.h"

/**
 * read_textfile - functions that reads a text file and prints it
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of leters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);
	_read = read(filedes, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (filedes == -1)
	{
		return (0);
	}
	free(buffer);
	close(filedes);
	return (_write);
}
