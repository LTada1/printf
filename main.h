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

int print_unknown(va_list args);
int printchar(va_list chr);
int _putchar(char);
int print_perc(void);
int printstr(va_list);
int print_int(va_list);
int print_dec(va_list);
int print_bin(va_list);
int _exp(int, int);
int digits(int);
/*int _strlen(char *s);*/
int print_ui(va_list);
<<<<<<< HEAD
Fspecify *_formparse(const char *format, int *num_of_specifiers);
void _parsestring(const char *format, int start, int end, Fspecify *specifiers, int *count);
=======
int print_hex(va_list);
int print_heX(va_list);
void put_hex(int nums[], int, int);
void put_heX(int nums[], int, int);

#endif /* MAIN_H */
=======
#ifndef _MAIN_H_
#define _MAIN_H_

typedef struct
{
char specifiers;
}Fspecify;

>>>>>>> a3fbd20c50df3476f03110c8c1917fe05b8b3735
int int_len(int num);
int _printf(const char *format, ...);
char *int_to_str(char *str, int num);
int _strlen(const char *str);

#endif
