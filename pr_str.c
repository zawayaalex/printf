#include "main.h"

/**
 * pr_str - function prints string
 * @argus: the argument input
 * Description: Function
 * Return: string_length
 */

int pr_str(va_list argus)
{
	int l, c;
	char *s_sp = va_arg(argus, char *);

	l = strlen(s_sp);
	for (c = 0; c < l; c++)
		putchar(s_sp[c]);
	return (l);
}
