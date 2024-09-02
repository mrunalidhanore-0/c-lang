#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	printf("enter array size ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<4;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("lenthg of array:%d",n);
	
	 
	


}
