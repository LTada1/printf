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

Fspecify *_formparse(const char *format, int *num_of_specifiers)
{
int len, i, start;
int count = 0;
Fspecify *specifier;

len = _strlen(format);
specifier = malloc(sizeof(Fspecify) * len);

if (!specifier)
{
write(2, "memory allocation failure", 26);
return (NULL);
}

for (i = 0; i < len; i++)
{
if (format[i] == '%')
{
i++;
	if (format[i] != '\0')
		{
		specifier[count].specifiers = format[i];
		specifier[count].string = NULL;
		count++;
		}
} else
{
	start = i;
	while (format[i] != '%' && format[i] != '\0')
		{                
		i++;
		}
}
if (i > start)
	{
		_parsestring(format, start, i, specifier, &count);
	}
}
*num_of_specifiers = count;
return (specifier);
}
