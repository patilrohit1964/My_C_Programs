#include<stdio.h>
int area()
{
	int radius;
	const float pi=3.14;
	printf("enter your circle radius:");
	scanf("%d",&radius);
	int area;
	area=pi*radius*radius;
	printf("area of circle is:%d",area);
}
void main()
{
	printf(area());
}
