#include "stdio.h"

/**
 * put_chary - func writes character to stdout
 * @c: character to print
 * Return: 1 (success)
 * -1 (error)
 */

int put_chary(char c)
{
	return (write(1, &c, 1));
}
