#include "main.h"

/**
 * pr_str - function prints string
 * @argus: the argument input
 * Return: string_length
 */

int pr_str(va_list argus)
{
	int l, c;
	char *s_sp = va_arg(argus, char *);

	i = strlen(s_sp);
	for (c = 0; c < l; c++)
		putchar(s_sp[j]);
	return (l);
}