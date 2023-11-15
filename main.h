#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 *struct fn_params - struct for calling printing functions
 *
 * @ptr_sp: pointer to specifier
 * @ptr_fn: pointer to requested function
 */
typedef struct fn_params
{
	int (*ptr_fn)();
	char *ptr_sp;
} fn_params;


char _putchar(char c);
int _printf(const char *format, ...);
int pr_str(va_list argus);
int pr_char(va_list argus);
int pr_perc(void);
int pr_i_d(va_list argus);

#endif
