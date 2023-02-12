#include "main.h"

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int m;
		for (m = 0; m < n; m++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
