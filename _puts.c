#include "main.h"

/**
 *_putchar - function write character
 *@c: character to print
 *Return: 1 (success)
 * -1 (error)
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}

