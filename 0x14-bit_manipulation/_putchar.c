#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 * Return: if fail -1, else 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
