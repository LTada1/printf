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
