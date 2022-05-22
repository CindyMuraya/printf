#include "main.h"

/**
 * _putchar - writes a character c specified by
 * the argument char to stdout
 * @c: character to be written
 * Return: 0 if successful (the character written
 * as an unsigned char cast to an int) or EOF on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
