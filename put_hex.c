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
