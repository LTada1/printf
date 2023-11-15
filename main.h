<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int printchar(va_list chr);
int _putchar(char);
int _printf(const char *format, ...);
int print_perc(void);
int printstr(va_list);
int print_int(va_list);
int print_dec(va_list);
int print_bin(va_list);
int _exp(int, int);
int digits(int);
int _strlen(char *s);
int print_ui(va_list);

#endif /* MAIN_H */
=======
#ifndef _MAIN_H_
#define _MAIN_H_

typedef struct
{
char specifiers;
}Fspecify;

int int_len(int num);
int _printf(const char *format, ...);
char *int_to_str(char *str, int num);
int _strlen(const char *str);

#endif
>>>>>>> master
