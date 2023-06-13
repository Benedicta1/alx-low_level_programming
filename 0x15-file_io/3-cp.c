#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program copies the content of a file to another file
 * @argc: the argument (num)
 * @argv: the argument (string)
 * Return: This returns success 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	int numero1 = 1024, numero2 = 0;
	char text[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}

	while (numero1 == 1024)
	{
		numero1 = read(file_from, text, 1024);
		if (numero1 == -1)
		{
			dprint(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		numero2 = write(file_to, text, numero2);
		if (numero2 < numero1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(file_from) == -1)
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
