#include "main.h"

/**
 * get_endianness - checks for the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *end = (char *)&i;

	if (*end == 1)
	return (1);

	return (0);
}
