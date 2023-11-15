#include <unistd.h>
#include "main.h"
#define BUFF_SIZE 1024

char *int_to_str(char *buff, int value);

int _print_value(int value)
{
char buff[BUFF_SIZE];
int count = 0;
char *ptr;

if (value < 0)
{
write(1, "-", 1);
count++;
value = -value;
}
int_to_str(buff, value);
ptr = buff;
while (*ptr != '\0')
{
write(1, ptr, 1);
ptr++;
}
return (count);
}
