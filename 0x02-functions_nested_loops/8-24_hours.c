#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of jack Bauer
 * Return: every minute of the day, starting fromm 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, m;

	i = 0;
	while (i < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar ((i / 10) + '0');
			_putchar ((i % 10) + '0');
			_putchar (':');
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar ('\n');
			m++;
		}
		i++;
	}
}
