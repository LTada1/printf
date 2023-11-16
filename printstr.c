#include "main.h"

/**
 * printstr - Prints a string
 *
 * @str: String to print
 *
 * Return: Length of character of
 * str
 *
 */

int printstr(va_list str)
{
    char *st;
    int len;

    st = va_arg(str, char *);

    if (st == NULL) {
        len = write(1, "(null)", 6);
    } else {
        len = write(1, "String:[", 8);
        len += write(1, st, _strlen(st));
        len += write(1, "]\n", 2);
    }

    return len;
}
