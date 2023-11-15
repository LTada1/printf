#include <unistd.h>
#include "main.h"

/**
 * printstring - print string of characters
 * @str: string
 * 
 * Return: nothing
 */

void printstring(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
}
write(1, "\n", 1);
}
