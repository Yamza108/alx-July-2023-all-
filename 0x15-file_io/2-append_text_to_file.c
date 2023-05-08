#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: poiter to filename
 * @text_content: string to be added at end of file
 * Return: if fails -1, else 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr, len;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}
	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, len);

	if (opn == -1 || wr == -1)
	return (-1);
	close(opn);
	return (1);
}
