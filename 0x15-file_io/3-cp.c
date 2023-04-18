#include "main.h"

/**
 * print error - function that checks if files can be opened.
 * @file_from: file from.
 * @file_to: file to.
 * @argc: number of arguments.
 * @argv: arguments vector.
 */

void print_error(int argc, char *argv[])
{
	int file_from;
	int file_to;

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[2]);
		exit(99);
	}

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", argv[3]);
	}

}

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector
 * Return (0);
 */

int main(int argc, char *argv[])
{
	int f_from;
	int f_to;
	ssize_t br, bw;


	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		print_error(98, "Error: Can't read from file NAME_OF_THE_FILE %s\n", file_from, -1);
	}

	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
	{
		close(f_from);
		 print_error(99, "Error: Can't read from file NAME_OF_THE_FILE %s\n", file_from, -1)
	}

	char buf[BUF_SIZE];
	ssize_t br, bw;
	while ((br = read(f_from, buf, BUF_SIZE)) > 0)
	{
		bw = write(f_to, buf, br);
		if (bw != br)
		{
			close(f_from);
			close(f_to);
			print_error(99, "Error: Can't write to %s\n", file_to, -1);
		}
	}
	if (br == -1)
	{
		close(f_from);
		close(f_to);
		print_error(98, "Error:cant close %d", f_from);
	}

	if (close(f_to) == -1)
	{
		print_error(100, "Error:cant close %d", f_to);
	}
	return (0);
