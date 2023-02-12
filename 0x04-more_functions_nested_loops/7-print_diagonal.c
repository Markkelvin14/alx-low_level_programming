#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character _ function to print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int m, j;

		for (m = 0; m < n; m++)
		{
		for (j = 0; j < m; j++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
		}
	}
}
