#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to write the file
 * Return: if fails -1, else 1
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wr, len;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}
	opn = open(filename, O_CREAT | O_TRUNC, 0500);
	wr = write(opn, text_content, len);

	if (opn == -1 || wr == -1)
	return (-1);
	close(opn);
	return (1);
}
