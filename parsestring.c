#include "main.h"
#include <stdlib.h>
#include <unistd.h>


/**
 *
 *
 *
 *
 *
 */

void _parsestring(const char *format, int start, int end, Fspecify *specifier, int *count)
{
int len;
int i;

len = end - start;
specifier[*count].string = malloc(len + 1);

for (i = 0; i < len; i++)
{
	specifier[*count].string[i] = format[start + i];
}
specifier[*count].string[len] = '\0';
specifier[*count].specifiers = '\0';
(*count)++;
}
