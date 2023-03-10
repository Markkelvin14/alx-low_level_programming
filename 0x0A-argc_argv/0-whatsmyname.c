#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: num of arguements
 * @argv: arrays
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", *argv);
	return (0);
}
