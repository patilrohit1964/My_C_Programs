#include<stdio.h>
int table()
{
	int user;
	printf("enter your num:");
	scanf("%d",&user);
	int i=1;
	while(i<=10)
	{
		printf("%d * %d = %d\n",user,i,user*i);
		i++;
	}
}
void main()
{
	printf(table());
}
