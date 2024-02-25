#include<stdio.h>
void main()
{
	int user;
	printf("enter your array size:");
	scanf("%d",&user);
	int a[user];
	int i;
	for(i=0;i<user;i++)
	{
		printf("ente element in array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n your array element\n");
	for(i=0;i<user;i++)
	{
		printf("%d ",a[i]);
	}
	int sum=0;
	for (i=0;i<user;i++)
	{
		sum+=a[i];
	}
	printf("\nsum of array is:%d",sum);
}
