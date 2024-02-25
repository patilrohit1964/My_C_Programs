#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter your a num:");
	scanf("%d",&a);
	printf("enter your b num:");
	scanf("%d",&b);
	printf("enter your c num:");
	scanf("%d",&c);
	printf("enter your d num:");
	scanf("%d",&d);
	if (a<b)
	{
		if (a<c)
		{
			if (a<d)
			{
				printf("a is minimum");
			}
			else 
			{
				printf("d is minimum");
			}
		}
		else
		{
			if (c<d)
			{
				printf("c is minimum");
			}
			else 
			{
				printf("d is minimum");
			}
		}
	}
	else if(c<b)
	{
		if(c<d)
		{
			
			printf("c is minimum");
		}
		else 
			{
				printf("d is minimum");
			}	
	}
	else
		if(b<c)
		{
			if (b<d)
			{
				printf("b is minimum");
			}
			else
			{
				printf("d is minimum");	
			}
		}
		else
		{
			printf("c is minimum");
		}
}
