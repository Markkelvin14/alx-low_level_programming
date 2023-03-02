#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: is a pointer
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int m;

	char room1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char room2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[i] == room1[m])
			{
				s[i] = room2[m];
				break;
			}
		}
	}
	return (s);
}
