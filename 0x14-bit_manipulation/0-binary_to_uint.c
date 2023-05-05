#include "main.h"

/**
 * binary_to_uint - converts from binary to uint
 * @b: contains binary number
 * Return: converted decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int d = 0;

	if (!b)
	return (0);
	for (n = 0; b[n]; n++)
	{
	if (b[n] < '0' || b[n] > '1')
	return (0);
	d = 2 * d + (b[n] - '0');
	}
	return (d);
}
