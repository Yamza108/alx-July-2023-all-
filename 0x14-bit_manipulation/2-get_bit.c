#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets value of a given index.
 * @n: The bit.
 * @index: The index to get the value at index.
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
	if ((n & (1 << index)) == 0)
	return (0);

	return (1);
}
