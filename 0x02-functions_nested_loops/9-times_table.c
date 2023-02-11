#include "main.h"
/**
 * times_table - a function that prints table, starting with 0
 */
void times_table(void)
{
	int i, m, n;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{
			n = m * i;
			if (m == 0)
			{
				_putchar (n + '0');
			}
			if (n < 10 && m != 0)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ((n / 10) + '0');
				_putchar ((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
