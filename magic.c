#include<stdio.h>
void main()
{
	int user;
	printf("enter your num:");
	scanf("%d",&user);

	int a,b,c,d;
	a=user%10;
	b=user/10;
	c=b%10;
	d=b/10;
	printf(" a is :%d",a);
	printf("\n d is:%d",c);
	printf("\n d is:%d",d);

	if (a*c*d == a+c+d)
	{
		printf("\nthis is magic number:%d",user);
	}
	else
	{
		printf("\n not magic number:%d",user);
	}
}
