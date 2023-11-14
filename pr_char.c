#include "main.h"

/**
* pr_char - function that prints character
* @argus: arguments passed to the functions
* Return: 1 for a single char
*/

int pr_char(va_list argus)
{
int char_sp = va_arg(argus, int);
putchar(char_sp);
return (1);
}
