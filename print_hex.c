#include "main.h"

/**
 * print_hex - Prints unsigned int as hex value
 * @nums: Number to convert
 *
 * Return: Number of digits
 */
int print_hex(va_list nums)
{
	unsigned int num;
	int j, i, c;
	char x;
	int hexs[64];

	i = 0;
	num = va_arg(nums, unsigned int);

	while (num / 16)
	{
		c = num % 16;
		put_hex(hexs, c, i);
		num /= 16;
		i++;
	}
	hexs[i] = num;

	for (j = i; j >= 0; j--)
	{
		if (hexs[j] >= 97)
		{
			x = hexs[j];
			write(1, &x, 1);
		}
		else
		{
			c = '0' + hexs[j];
			write(1, &c, 1);
		}
	}
	++i;


	return (i);
}

/**
 * print_heX - Prints unsigned int as hex value in Upper case
 * @nums: Number to convert
 *
 * Return: Number of digits
 */
int print_heX(va_list nums)
{
	unsigned int num;
	int j, i, c;
	char x;
	int hexs[64];

	i = 0;
	num = va_arg(nums, unsigned int);

	while (num / 16)
	{
		c = num % 16;
		put_heX(hexs, c, i);
		num /= 16;
		i++;
	}
	hexs[i] = num;

	for (j = i; j >= 0; j--)
	{
		if (hexs[j] >= 65)
		{
			x = hexs[j];
			write(1, &x, 1);
		}
		else
		{
			c = '0' + hexs[j];
			write(1, &c, 1);
		}
	}
	++i;

	return (i);
}
