#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - allocates 1024 mem for buff
 * @file: char container for buffer
 * Return: ponter to a new buffer
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buff);
}
/**
 * close_file - closes file descr
 * @fd: file discrip to be closed
 */
void close_file(int fd)
{
	int clse;

	clse = close(fd);

	if (clse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}
/**
 * main - copies the contents from one file to another
 * @argc: arguments  to the program
 * @argv: array of pointers
 * Return: 0 if pass
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
		dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
		}
		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
		}
		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
