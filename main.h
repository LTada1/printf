#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int printchar(va_list chr);
int _putchar(char);
int _printf(const char *format, ...);
int print_perc(va_list);
int printstr(va_list);
int print_int(va_list);
int print_dec(va_list);
int print_bin(va_list);
int _exp(int, int);
int digits(int);
int _strlen(char *s);


#endif /* MAIN_H */
