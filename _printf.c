#include "main.h"

/**
 *_printf - printf function
 *@format: format character string specifier
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0, str_count;
	char *str;

	va_start(args, format);

	if  (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_chary(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			put_chary(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_count = put_s(va_arg(args, char *));
			i++;
			count += (str_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			put_chary('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
