#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int i, m;

	i = 0;
	while (i < 10)
	{
		m = 0;
		while (m < 15)
		{
			if (m >= 10)
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			m++;
		}
		_putchar ('\n');
		i++;
	}
}
