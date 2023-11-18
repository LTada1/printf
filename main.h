#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


typedef struct
{
char *string;
char specifiers;
}Fspecify;

int print_unknown(void);
int print_unsigned(va_list args);
int printchar(va_list chr);
int _putchar(char);
int print_perc(void);
int _printstr(va_list val);
int print_int(va_list nums);
int print_dec(va_list);
int print_bin(va_list);
int print_oct(va_list);
int _exp(int, int);
int digits(int);
/*int _strlen(char *s);*/
int print_ui(va_list);

Fspecify *_formparse(const char *format, int *num_of_specifiers);
void _parsestring(const char *format, int start, int end, Fspecify *specifiers, int *count);
int print_hex(va_list);
int print_heX(va_list);
void put_hex(int nums[], int, int);
void put_heX(int nums[], int, int);

int unsigned_int(va_list args);
int _print_specifier(char specifier, va_list args);
int int_len(int num);
int _printf(const char *format, ...);
char *int_to_str(char *str, int num);
int _strlen(const char *str);

#endif
