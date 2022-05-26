#include <stdio.h>

int main(void)
{
	const volatile int local = 10;

	int *ptr = (int*) &local;
	printf("%d\n", local);
	*ptr = 100;
	printf("%d", local);
	return(0);
}
