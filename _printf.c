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
int i = 0;
int char_print = 0;


while(format[i] != '\0')
{
	if (format[i] == '%'){
	i++;
        if (format[i] == 's')
	{
            char_print += printstr(args);
        } else if (format[i]  == '%'){
            char_print += print_perc();
        } else if (format[i]  == 'c') {
            char_print += printchar(args);
        } else if (format[i]  == 'd') {
            char_print += print_int(args);
        } else if (format[i]  == 'r') {
            char_print += print_unknown();
	}
	} else
	{
            _putchar(format[i]);
		char_print++;
        }
	i++;
    }
    va_end(args);
return (char_print);
}
