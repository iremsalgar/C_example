#include<stdio.h>
int main(void)
{
	extern int var = 5;
	printf("%d", var);
}
