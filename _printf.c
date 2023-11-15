#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>


/**
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
va_list args;
int i, char_print = 0, num_of_specify;
Fspecify *specifier;


specifier = _formparse(format, &num_of_specify);
for (i = 0; i < num_of_specify; ++i)
{
        if (specifier[i].specifiers == 's')
	{
            char_print += printstr(args);
        } else if (specifier[i].specifiers == '%'){
            char_print += print_perc();
        } else if (specifier[i].specifiers == 'c') {
            char_print += printchar(args);
        } else if (specifier[i].specifiers == 'd') {
            char_print += print_int(args);
        } else if (specifier[i].specifiers == 'r') {
            char_print += print_unknown(args); 
	} else
	{
            _putchar(format[i]);
		char_print++;
        }
    }
    va_end(args);
    free(specifier);
return (char_print);
}
