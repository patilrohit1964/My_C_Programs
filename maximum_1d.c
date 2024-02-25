#include<stdio.h>
void main()
{
	int a[4];
	int i;
	printf("enter element 0 in array:");
	scanf("%d",&a[0]);
	printf("enter element 1 in array:");
	scanf("%d",&a[1]);
	printf("enter element 2 in array:");
	scanf("%d",&a[2]);
	printf("enter element 3 in array:");
	scanf("%d",&a[3]);
	
	if (a[0]>a[1] && a[0]>a[2] && a[0]>a[3])
	{
		printf("0 index is maximum:%d",a[0]);
	}
	else if (a[1]>a[2] && a[1]>a[3])
	{
		printf("1 index is maximum:%d",a[1]);
	}
	else if(a[2]>a[3])
	{
		printf("2 index is maximum:%d",a[2]);
	}
	else {
		printf("3 index is maximum:%d",a[3]);
	}

}
