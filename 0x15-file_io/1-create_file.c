#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: null terminated string to write to the file
 * Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filedes, result, count = 0;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
			count++;
	result = write(filedes, text_content, count);

	if (result == -1)
		return (-1);
	close(filedes);
	return (1);
}

