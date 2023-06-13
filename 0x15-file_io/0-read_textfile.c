#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @letters: number of letters it should read and print
 * @filename: The text file that is being read
 * Return: if the file can not be opened or read, return 0,
 * if filename is NULL return 0, if write fails or does not write
 * the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t file, write, print;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	print = read(file, text, letters);
	write = write(STDOUT_FILENO, text, print);

	free(text);
	close(file);
	return (write);
}
