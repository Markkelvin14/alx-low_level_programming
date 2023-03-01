#include <stdio.h>

int main(void)
{
	int arr[5] = {2,4,6,7,10};
	int *ptr;
	ptr = &arr[1];
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	printf("%p\n", &arr[3]);
	printf("%p\n", &arr[4]);
	printf("memory address is: %p\n", &arr[1]);
	return 0;
}
