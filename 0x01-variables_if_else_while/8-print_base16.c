#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Answer 0
 */
int main(void)
{
	int i;

	char c;

	i = '0';
	c = 'a';
	for (i = '0'; i <= '9'; i++)
	putchar (i);
	for (c = 'a'; c <= 'f'; c++)
	putchar (c);
	putchar ('\n');
	return (0);
}
