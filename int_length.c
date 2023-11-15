#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int int_len(int num)
{
int count;
count = (num == 0) ? 1 : 0;
while (num != 0)
{
num /= 10;
count++;
}
return (count);
}
