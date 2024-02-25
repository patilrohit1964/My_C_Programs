#include<stdio.h>
void main()
{
	int user;
	printf("enter your row size:");
	scanf("%d",&user);
	printf("enter your column size:");
	scanf("%d",&user);
	int a[user][user];
	int i,j;
	for(i=0;i<user;i++)
	{
		for (j=0;j<user;j++)
		{
			printf("enter elements in array a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n elements of matrix is\n");
	for (i=0;i<user;i++)
	{
		for (j=0;j<user;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(i=0;i<user;i++)
	{
		sum+=a[i][user-i-1];
	}
	printf(" sum of anti diagonal:%d",sum);
	
}
