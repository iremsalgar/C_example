#include<stdio.h>
extern int var = 0;
int main(void)
{
	printf("extern%d\n", var);
	var = 10;
	printf("%d", var);
	return 0;
}
