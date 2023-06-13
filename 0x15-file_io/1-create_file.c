#include "main.h"
#include <stdlib.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, wr, area;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (area = 0; text_content[area];)
			area++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wr = write(file, text_content, area);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);

}
