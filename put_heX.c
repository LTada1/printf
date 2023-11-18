#include "main.h"

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
