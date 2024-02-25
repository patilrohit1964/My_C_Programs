#include<stdio.h>
void main()
{
	int user;
	printf("enter your num:");
	scanf("%d",&user);
	int a,b,c,d,z;
	a=user%10;
	b=user/10;
	c=b%10;
	d=b/10;
	z=(a*a*a+c*c*c+d*d*d);

	if (z==user)
	{
		printf("armstrong");
	}
	else 
	{
		printf("not armstrong");
	}
}
