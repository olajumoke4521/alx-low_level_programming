#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: pararmeter
 * Return: 0 if successful
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
