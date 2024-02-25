// write c program third angle of a triangle if two angles are given
#include<stdio.h>
void main()
{
	float a1,a2,a3;
	printf("enter triangle 1 angel:");
	scanf("%f",&a1);
	printf("enter triangle 2 angel:");
	scanf("%f",&a2);
	a3=180.0-(a1+a2);
	printf("the third angle of triangle is angle:%0.2f",a3);
}
