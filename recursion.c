#include<stdio.h>
int factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	return n * factorial(n-1);
}
void main()
{
	printf("factorial is:%d",factorial(5));
}
