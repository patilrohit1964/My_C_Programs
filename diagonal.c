#include<stdio.h>
void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i,j;
	int mul=1;
	printf("\narray element is\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (i==j)
			{
				mul*=a[i][j];
			}
		}
		printf("\n");
	}
	printf("\ndiagonal multiplication:%d",mul);
}
