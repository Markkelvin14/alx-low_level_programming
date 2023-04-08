#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is an integer
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	/**if (n > 1)*/
		/**print_binary(n / 2);*/
	/**printf("%ld", n % 2)i;*/
	int m = 63;
	int k = 0;
	unsigned long int shot;

	while (m >= 0)
	{
		shot = n >> m;
		m--;
		if (shot & 1)
		{
			_putchar ('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (k == '\0')
		_putchar('0');
}
