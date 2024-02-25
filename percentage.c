#include<stdio.h>
void main()
{
	int p,c,m,b;
	printf("physics:");
	scanf("%d",&p);
	printf("chemistry:");
	scanf("%d",&c);
	printf("math:");
	scanf("%d",&m);
	printf("biology:");
	scanf("%d",&b);
	int total=p+c+m+b;
	float per=total/4;
	printf("\n total is:%d",total);
	printf("\n percentage is:%.2f",per);
	if (per>90 && per<=100)
	{
		printf("\nGrade :A");
	}
	else if(per>80 && per <=90)
	{
		printf("\nGrade :B");
	}
	else if(per>70 && per <=80)
	{
		printf("\n Grader :c");
	}
	else if(per>60 && per<=70)
	{
		printf("\nGrade:d");
	}
	else if(per>50 && per<=60)
	{
		printf("\nGrade:E");
	}
	else if(per>=35 && per<=50)
	{
		printf("\nGrade:G");
	}
	else if(per<35)
	{
		printf("s\norry your are fail try next time");
	}
}
