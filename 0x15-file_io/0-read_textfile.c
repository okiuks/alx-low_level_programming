#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: variable pointer.
 * @letters: number of letters to read and write.
 * Return: actual number of letters it could read or print, 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *text;
	ssize_t br;
	ssize_t bw;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		return (0);
	}

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		return (0);
	}

	br = read(file_d, text, letters);
	bw = write(STDOUT_FILENO, text, br);

	close(file_d);
	free(text);
	return (bw);
}
