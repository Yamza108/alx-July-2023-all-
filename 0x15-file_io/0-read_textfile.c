#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout.
 * @filename: pointer to the filename
 * @letters: number of letters to be read and printed
 * Return: if fails 0, else number of letter to read & print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wr;
	char *buff;

	if (filename == NULL)
	return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wr != rd)
	{
	free(buff);
	return (0);
	}
	free(buff);
	close(opn);
	return (wr);
}
