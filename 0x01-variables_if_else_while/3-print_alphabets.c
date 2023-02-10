#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	c = 'A';

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}
