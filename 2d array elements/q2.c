#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	printf("enter array sized:");
	scanf("%d", &n);
	int a[n];
	
	for(i=0;i<n;i++);
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			printf("a[%d]=%d\n ",i,a[i]);	
		}
		printf("length of array :%d ",n);
	}
}

 	
 	
 	
			
		
 
 
 	
 	
 		
	 

	
	
