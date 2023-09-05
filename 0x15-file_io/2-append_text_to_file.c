#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the null terminated string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, _write, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	filedes = open(filename, O_WRONLY | O_APPEND);
	_write = write(filedes, text_content, count);
	if (_write == -1)
		return (-1);
	if (filedes == -1)
		return (-1);

	close(filedes);
	return (1);
}
