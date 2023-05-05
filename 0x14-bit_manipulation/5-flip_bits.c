#include "main.h"

/**
 * flip_bits - Counts bits to be flipped
 * @n: Number
 * @m: number to flip n to
 * Return: bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, bt = 0;

	while (XOR > 0)
	{
	bt = bt + (XOR & 1);
	XOR >>= 1;
	}
	return (bt);
}
