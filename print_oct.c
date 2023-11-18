#include "main,h"


/**
 * print_oct - Prints unsigned int as
 * octal
 * @nums: Va_list argument
 *
 * Return: Number of digits
 */
int print_oct(va_list nums)
{
	unsigned int num, n;
	int i, j;
	int octs[64];

	num = va_arg(nums, unsigned int);
	i = 0;
	while (num / 8)
	{
		n = num % 8;
		octs[i] = n;
		num /= 8;
		i++;
	}
	octs[i] = num;
	++i;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + octs[j]);
	}
	/*_putchar('\n');*/

	return (i);
}
