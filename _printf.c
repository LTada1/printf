#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>


/**
 * _printf - A custom printf function
 * @format: A format string
 *
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
va_list args;
int char_print, i;
va_start(args, format);

char_print = 0;
i = 0;

while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
char_print += _print_specifier(format[i], args);
}
else
{
_putchar(format[i]);
char_print++;
}
i++;
}

va_end(args);
return (char_print);
}

/**
 * _print_specifier - A function that print specifiers from arguments.
 * @specifier: A specifier from the format string.
 * @args: a variable argument
 *
 * Return: 1
 */

int _print_specifier(char specifier, va_list args)
{
switch (specifier)
{
case 's':
	return (_printstr(args));
case '%':
	return (print_perc());
case 'c':
	return (printchar(args));
case 'd':
case 'i':
	return (print_int(args));
case 'u':
	return (unsigned_int(args));
case 'r':
	return (print_unknown());
case 'X':
case 'x':
	return (print_hex(args));
default:
	_putchar(specifier);
return (1);
}
}
