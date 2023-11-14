#include "main.h"

/**
 *print_int - prints integer input
 *@i: int to print
 * Return: 1 if success
 */

int print_int(va_list i)
{
  int integy;
	int j = 0;

	integy = va_arg(i, int*);
	if (integy == NULL)
		integy = "(null)";
	while (integy[j])
	{
		_putchar(integy[j]);
		j++;
	}
	return (j);
}
