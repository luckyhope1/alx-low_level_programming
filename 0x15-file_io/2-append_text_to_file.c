#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len;
	ssize_t nwritten;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	nwritten = fwrite(text_content, sizeof(char), len, file);
	fclose(file);
	return ((nwritten == (ssize_t)len) ? 1 : -1);
}
