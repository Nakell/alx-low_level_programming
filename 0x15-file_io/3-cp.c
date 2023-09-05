#include "main.h"

/**
 * create_buff - allocates 1024 bytes for a buffer
 * @file: name of the file buffer is storing chars for
 * Return: A pointer to the newly allocated buffer
 */
char *create_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error; Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments
 * @argv: an array of pointers
 * Return: 0
 * Description: if the argument count is incorrect - exit code 97
 * if file from does not exit - exit code 98
 * if file_to cannot be created  - exit code 99
 * if file_to or fil_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int file_fro, file_t, _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buff(argv[2]);
	file_fro = open(argv[1], O_RDONLY);
	_read = read(file_fro, buffer, 1024);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_fro == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		_write = write(file_t, buffer, _read);
		if (file_t == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		_read = read(file_fro, buffer, 1024);
		file_t = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);
	free(buffer);
	close_file(file_fro);
	close_file(file_t);
	return (0);
}
