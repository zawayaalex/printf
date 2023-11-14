#include "main.h"

/**
* printf - our own printf function that prints user inputs
* @format: pointer to the format input
* Return: if fail = -1 if success =  count of what was printed
*/

int printf(const char *format, ...)
{
int counted = 0, i = 0, a = 0;
va_list argus;
fn_params find_sp[] = {
{pr_char, "%c"}, {pr_str, %s}};
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);

va_start(argus, format);
look:
while (format[i] != '\0')
{
a = 0;
while (a < 13)
{
if (format[i] == find_sp[a].ptr_sp[0] && format[i+1] == find_sp[a].ptr_sp[1])
{
counted += find_sp[a].ptr_fn(argus);
i = i + 2;
goto look;
}
a++;
}
putchar(format[i]);
counted++;
i++;
}
va_end(argus);
return(counted);
}
