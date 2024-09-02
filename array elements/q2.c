#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum=0,n;
	float avg;
	printf("enter array sized ");
	scanf("%d",&n);
	int  a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
  	}
	for(i=0;i<n;i++)
	{
		sum =sum + a[i];
		avg =sum/n;
	}
	printf("avg of an array:%2f",avg);	
			
		
	
	
	
}
