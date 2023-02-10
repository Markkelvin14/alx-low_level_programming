#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char c, e, q;

	c = 'a';
	e = 'e';
	q = 'q';
	while (c <= 'z')
	{
		if (c != e && c != q)
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
