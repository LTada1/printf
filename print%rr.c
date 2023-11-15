#include "main.h"

int print_unknown(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;

    if (str == NULL) {
        len += write(1, "(null)", 6);
    } else {
        len += write(1, str, _strlen(str));
    }

    return len;
}
