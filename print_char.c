#include "main.h"

/*
 *print_char - print character c
 *@c: printed character
 *Return: 1 (success)
 */

int print_char (va_list c)
{
	unsigned char chary;

	chary = va_arg(c, int);
	_putchar(chary);
	return (1);
}

/**
 * print_percentage - print %
 * Return: 1 (success)
 */

int print_percentage(void)
{
	_putchar('%');
	return (1);
}
