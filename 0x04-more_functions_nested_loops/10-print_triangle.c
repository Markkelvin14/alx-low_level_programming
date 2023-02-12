#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int i, m, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (m = size - i; m > 1; m--)
			{
				_putchar (' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
