#include "main.h"

/**
 *_printf - printf function
 *@format: format character string specifier
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{

	va_list args;

	unsigned int i = 0, count = 0, str_count;


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
		count++;
	}
	va_end(args);
	return (count);
}
