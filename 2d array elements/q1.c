#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,r,c,sum=0;
	float avg;
	
	printf("enter row:");
	scanf("%d",&r);
	printf("enter colum:");
	scanf("%d",&c);
	int  a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			 sum =sum+a[i][j];
			 avg =sum/(r*c);
		}
		printf("\n");
		
		
		
	
		
	}
		printf("Average of an Array:%.2f",avg);
	
	
	
	
	
}
