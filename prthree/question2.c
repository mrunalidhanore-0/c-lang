#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count=0;
	
	printf("enter n:");
	scanf("%d",&n);
	
	do
	{
		n/=10;
		count++;
	
	}while(n!=0);
	
	printf("total digit:%d",count);
	
	
	
}
