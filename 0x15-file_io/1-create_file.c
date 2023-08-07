#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: null terminated string to write to the file
 * Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filedes, count = 0;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		while (text_content[count])
			count++;
		write(filedes, text_content, count);
	}
	if (filedes == -1)
		return (-1);
	close(filedes);
	return (1);
}

