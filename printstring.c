#include <unistd.h>
#include "main.h"

/**
 * _printstr - print string of characters
 * @val: value
 *
 * Return: nothing
 */

int _printstr(va_list val)
{
char *str;
int x, length;

str = va_arg(val, char *);
if (str == NULL)
{
str = "(null)";
length = _strlen(str);
for (x = 0; x < length; x++)
_putchar(str[x]);
return (length);
}
else
{
length = _strlen(str);
for (x = 0; x < length; x++)
_putchar(str[x]);
return (length);
}
}
