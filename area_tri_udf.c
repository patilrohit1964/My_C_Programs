#include<stdio.h>

int area()
{
	int l,h,a;
	printf("ente your base size:");
	scanf("%d",&l);
	printf("enter your height:");
	scanf("%d",&h);
	a=(l*h)/2;
	printf("area of triangle is:%d",a);
}
void main()
{
	printf(area());
}
