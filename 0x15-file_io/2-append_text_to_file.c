#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer of variable.
 * @text_content: string to add at end of file.
 * Return: 1 on success and -1 if failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, fp);
	}

	fclose(fp);
	return (1);
}
