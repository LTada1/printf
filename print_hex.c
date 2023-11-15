#include "main.h"

/**
 * put_hex - Fills array
 *
 * @hexs: Array
 * @c: value
 * @i: Index
 *
 * Return: Nothing
 */
void put_hex(int hexs[], int c, int i)
{
	if (c >= 0 && c <= 9)
	{
		hexs[i] = c;
	}
	else if (c == 10)
	{
		hexs[i] = 'a';
	}
	else if (c == 11)
	{
		hexs[i] = 'b';
	}
	else if (c == 12)
	{
		hexs[i] = 'c';
	}
	else if (c == 13)
	{
		hexs[i] = 'd';
	}
	else if (c == 14)
	{
		hexs[i] = 'e';
	}
	else if (c == 15)
	{
		hexs[i] = 'f';
	}
}


/**
 * put_heX - Fills array
 *
 * @hexs: Array
 * @c: value
 * @i: Index
 *
 * Return: Nothing
 */
void put_heX(int hexs[], int c, int i)
{
	if (c >= 0 && c <= 9)
	{
		hexs[i] = c;
	}
	else if (c == 10)
	{
		hexs[i] = 'A';
	}
	else if (c == 11)
	{
		hexs[i] = 'B';
	}
	else if (c == 12)
	{
		hexs[i] = 'C';
	}
	else if (c == 13)
	{
		hexs[i] = 'D';
	}
	else if (c == 14)
	{
		hexs[i] = 'E';
	}
	else if (c == 15)
	{
		hexs[i] = 'F';
	}
}

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

	printf("\n");

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
	printf("\n");

	return (i);
}
