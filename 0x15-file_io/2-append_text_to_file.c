#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int b, wr, area = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (area = 0; text_content[area];)
			area++;
	}

	b = open(filename, O_WRONLY | O_APPEND);
	wr = write(b, text_content, area);

	if (b == -1 || wr == -1)
		return (-1);
	close(b);

	return (1);
}
