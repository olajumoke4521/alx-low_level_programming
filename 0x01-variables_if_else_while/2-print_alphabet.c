#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
