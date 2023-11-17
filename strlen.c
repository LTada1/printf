#include <stdio.h>
#include "main.h"

/**
 * _strlen - determine string length
 * @str: string character
 *
 * Return: return string length.
 */

int _strlen(const char *str)
{
int len;

len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}
