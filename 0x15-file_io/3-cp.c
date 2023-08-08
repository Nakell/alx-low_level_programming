#include "main.h"

#define BUFF_SIZE 1024

char *create_new_buff(void);
void close_the_file(int filedes);

/**
 * create_new_buff - allocates 1024 bytes of buff
 * Return: newly allocated buff size
 */
char *create_new_buff(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate for buffer\n");
		exit(99);
	}
	return (buffer);
}

/**
 * close_the_file - closes filedescriptors
 * @filedes: the file descriptor to be closed
 */
void close_the_file(int filedes)
{
	int x;

	x = close(filedes);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filedes %d\n", filedes);
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
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_new_buff();
	file_from = open(argv[1], O_RDONLY);
	_read = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
		}
		_write = write(file_to, buffer, _read);
		if (file_to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't writeto %s\n", argv[2]);
		free(buffer);
		exit(99);
		}
		_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);
	free(buffer);
	close_the_file(file_from);
	close_the_file(file_to);
	return (0);
}
