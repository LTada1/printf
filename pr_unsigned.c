#include "main.h"

/**
 * unsigned_int - Function for printing unisigned integers.
 * @args: the arguments from the function.
*Return: printed characters.
*/
int unsigned_int(va_list args)
{
unsigned int y = va_arg(args, unsigned int);
int numb, last = y % 10, digit, exp = 1;
int x = 1;

y = y / 10;
numb = y;

if (last < 0)
{
_putchar('-');
numb = -numb;
y = -y;
last = -last;
x++;
}
if (numb > 0)
{
while (numb / 10 != 0)
{
exp = exp * 10;
numb = numb / 10;
}
numb = y;
while (exp > 0)
{
digit = numb / exp;
_putchar(digit + '0');
numb = numb - (digit *exp);
exp = exp / 10;
x++;
}
}
_putchar(last + '0');

return (x);
}
