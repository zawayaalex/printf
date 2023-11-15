#include "main.h"

/**
* pr_i_d - function that prints i or d
* @argus: length
* Description: fucntion
* Return: counter i
*/

int pr_i_d(va_list argus)
{
int ptr = va_arg(argus, int);
int i = 1;
int absolut, ending, current, tmp = 1;

ending = ptr % 10;
ptr = ptr / 10;
absolut = ptr;

if (ending < 0)
{
putchar('-');
ptr = -ptr;
ending = -ending;
absolut = -absolut;
i++;
}

if (absolut > 0)
{
while (absolut / 10 != 0)
{
tmp *= 10;
absolut = absolut / 10;
}
absolut = ptr;
while (tmp > 0)
{
current = absolut / tmp;
putchar('0' + current);
absolut = absolut - ((tmp) *(current));
tmp = tmp / 10;
i++;
}
}
putchar('0' + ending);
return (i);
}
