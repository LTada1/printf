#include <stdio.h>
#include "main.h"

/**
 * stinglen - determine string length
 * @str: string character
 *
 * Return: return string length.
 */

int _strlen(const char *str)
{
int i;
int len = 0;
for (i = 0; i < str[len]; i++)
{
len++;
}
return (len);
}
