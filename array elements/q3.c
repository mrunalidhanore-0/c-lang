#include<stdio.h>
#include<conio.h>

int main()
{
	int 
	n,sum=0,i;
	printf("enter the array sized");
	scanf("%d",&n);
	
	
	int a[n],b[n],c[n];
		for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
 	c[i]=a[i]+b[i];
	}
	printf("array c is:");
	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
	 

}
