#include "main.h"

/**
 *catch_function - function finds printf format
 *and call corresponding function
 *@format: a character string from _printf
 *Return: the function or NULL
 */

int (*catch_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f catch_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", (int (*)(va_list))print_percentage},
		{NULL, NULL}
	};

	while (catch_f[i].specs)
	{
		if (catch_f[i].specs[0] == (*format))
			return (catch_f[i].f);
		i++;
	}
	return (NULL);
}

/**
 *_printf - printf function
 *@format: format character string
 *Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{

	va_list args;
	int (*f)(va_list);
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		f = catch_function(&format[i + 1]);
		if (f != NULL)
		{
			count += f(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}
