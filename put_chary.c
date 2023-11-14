#include "main.h"

/**
 *put_chary - function write character
 *@c: character to print
 *Return: 1 (success)
 * -1 (error)
 */

char put_chary(char c)
{
	return (write(1, &c, 1));
}

