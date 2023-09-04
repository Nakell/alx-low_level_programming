#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text-content: is the null terminated string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, _write, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	filedes = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0664);
	_write = write(filedes, text_content, count);
	if (filedes == -1)
		return (-1);
	if (_write == -1)
		return (-1);
	close(filedes);
	return (1);
}
