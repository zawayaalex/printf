#include "main.h"

/**
 *_printf - printf function
 *@format: format character string specifier
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0, str_count;
	va_list args;

	if  (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			put_chary(format[i]);
		else if (format[i + 1] == 'c')
		{
			put_chary(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				put_s("(null)");
				count += 6;
			}
			else
			{
			str_count = put_s(str);
			i++;
			count += (str_count - 1);
			}
		}
		else if (format[i + 1] == '%')
		{
			put_chary('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
