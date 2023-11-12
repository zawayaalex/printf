#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 *struct code_format - format structure
 *@specs: specifiers
 *@f: corresponding function
 */
typedef struct code_format
{
	char *specs;
	int (*f)(va_list);
} code_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char (va_list c);
int print_string(va_list s);

#endif
