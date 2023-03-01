#include "main.h"

int main(void)
{
	int x;
	x = 5;
	int *ptr;
	ptr = &x;
	printf("value of x is: %d\n", x);
	printf("memory address of x: %p\n", ptr);
	printf("value at the adress x: %d\n", *ptr);
	return (0);
}
