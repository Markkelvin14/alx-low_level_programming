#include "main.h"
/**
 * _atoi - This function converts a string to an integer.
 * @s: Pointer parameter
 * Return: returns an integer value
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, m = 0, k = 1, j = 1, p;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			k *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				j *= 10;
			size++;
		}
		count++;
	}

	for (p = count - size; p < count; p++)
	{
		m = m + ((*(s + p) - 48) * j);
		j /= 10;
	}
	return (m * k);
}
