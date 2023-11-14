#include "main.h"

/**
 *print_string - write array of chars
 *@s: string to print
 *Return: 1 (success)
 */

int print_string(va_list s)
{
	char stringy;
	int i = 0;

	stringy = va_arg(s, char *);
	if (stringy == NULL)
		stringy = "(null)";
	while (stringy[i])
	{
		_putchar(stringy[i]);
		i++;
	}
	return (i);
}
