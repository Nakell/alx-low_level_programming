#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t _read, _write;
	char *buffer;/*stores data read from the file*/

	if (filename == NULL)
		return (0);
	/**dynamic memory allocation*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);/**open file specified by filename*/
	_read = read(filedes, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (filedes == -1)
	{
		free(buffer);
		close(filedes);
		return (0);
	}
	if (_read == -1 || _write == -1 || _write != _read)
	{
		free(buffer);
		close(filedes);
		return (0);
	}

	return (_write);
}
