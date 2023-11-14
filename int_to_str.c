#include "main.h"
#include <stddef.h>

/**
 *
 *
 *
 */

char *int_to_str(char *str, int num)
{
int sign, begin, end;
int value, tmp;
size_t len;
int i = 0;

if (num == '0')
{
str[0] = '0';
str[1] = '\0';
return (str);
}
sign = (num < 0) ? -1 : 1;
while (num != 0)
{
value = num % 10;
str[i++] = '0' + (value * sign);
num /= 10;
}
if (sign == -1)
{
str[i++] = '-';
}
str[i] = '\0';

len = _strlen(str);
begin = 0;
end = len - 1;
while (begin < end)
{
tmp = str[begin];
str[begin] = str[end];
str[end] = tmp;
begin++;
end--;
}
return(str);
}
